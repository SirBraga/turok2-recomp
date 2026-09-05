cmake_minimum_required(VERSION 3.20)

project(Turok2Recompiled LANGUAGES C CXX)

if(APPLE)
    enable_language(OBJC OBJCXX)
endif()

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(N64RECOMP_ROOT
    "${CMAKE_CURRENT_SOURCE_DIR}/../../tools/N64ModernRuntime/N64Recomp"
    CACHE PATH "Path to the N64Recomp headers bundled with N64ModernRuntime")
set(N64MODERNRUNTIME_ROOT
    "${CMAKE_CURRENT_SOURCE_DIR}/../../tools/N64ModernRuntime"
    CACHE PATH "Path to N64ModernRuntime")

file(GLOB RECOMPILED_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/RecompiledFuncs/*.c")

add_library(Turok2RecompiledFuncs STATIC ${RECOMPILED_SOURCES})

target_include_directories(Turok2RecompiledFuncs PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/RecompiledFuncs"
    "${N64RECOMP_ROOT}/include")

# The recompiled C is machine output: it reads uninitialised locals, calls
# before declaring, and divides by literal zero on paths the MIPS never took.
# Those diagnostics are noise here, and the patch header must be force-included
# into every one of the ~1000 translation units.
if(MSVC)
    target_compile_options(Turok2RecompiledFuncs PRIVATE
        /bigobj                 # generated TUs blow past the default section limit
        /wd4013                 # undefined function, assumed extern returning int
        /wd4101                 # unreferenced local
        /wd4723                 # potential divide by zero
        /wd4102                 # unreferenced label
        /FI"${CMAKE_CURRENT_SOURCE_DIR}/src/patches/turok2_patches.h")
else()
    target_compile_options(Turok2RecompiledFuncs PRIVATE
        -fno-strict-aliasing
        -Wno-unused-variable
        -Wno-implicit-function-declaration
        -Wno-division-by-zero
        "-include" "${CMAKE_CURRENT_SOURCE_DIR}/src/patches/turok2_patches.h")
endif()

add_subdirectory("${N64MODERNRUNTIME_ROOT}" "${CMAKE_BINARY_DIR}/N64ModernRuntime")

add_executable(Turok2MapSmoke
    src/crash_diagnostics.cpp
    src/entrypoint.cpp
    src/register_overlays.cpp
    src/si.cpp
    src/map_smoke.cpp
    src/patches/native_60.cpp)

target_include_directories(Turok2MapSmoke PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/RecompiledFuncs"
    "${CMAKE_CURRENT_SOURCE_DIR}/src"
    "${N64MODERNRUNTIME_ROOT}/N64Recomp/include"
    "${N64MODERNRUNTIME_ROOT}/librecomp/include"
    "${N64MODERNRUNTIME_ROOT}/ultramodern/include")

target_link_libraries(Turok2MapSmoke PRIVATE
    Turok2RecompiledFuncs
    librecomp
    ultramodern)

option(TUROK2_BUILD_APP "Build the experimental RT64 application" ON)

if(TUROK2_BUILD_APP)
    set(RT64_STATIC TRUE)
    set(RT64_SDL_WINDOW_VULKAN TRUE)
    add_compile_definitions(HLSL_CPU __PRFCHWINTRIN_H)

    # Match how RT64 sources SDL2: a vendored copy on Windows, where there is no
    # system package, and find_package everywhere else.
    set(TUROK2_RT64_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../../tools/rt64")
    if(WIN32)
        set(TUROK2_SDL2_DIR
            "${TUROK2_RT64_DIR}/src/contrib/mupen64plus-win32-deps/SDL2-2.26.3")
        set(SDL2_INCLUDE_DIRS "${TUROK2_SDL2_DIR}/include")
        set(SDL2_LIBRARIES "SDL2" "SDL2main")
        link_directories("${TUROK2_SDL2_DIR}/lib/x64")
    else()
        find_package(SDL2 REQUIRED)
    endif()

    add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/../../tools/rt64"
                     "${CMAKE_BINARY_DIR}/rt64")
    target_include_directories(rt64 PRIVATE "${CMAKE_BINARY_DIR}/rt64/src")

    # RT64's shader helper functions resolve these variables in the caller's
    # scope when RecompFrontend invokes them.
    if(APPLE)
        set(DXC
            "DYLD_LIBRARY_PATH=${CMAKE_CURRENT_SOURCE_DIR}/../../tools/rt64/src/contrib/dxc/lib/arm64"
            "${CMAKE_CURRENT_SOURCE_DIR}/../../tools/rt64/src/contrib/dxc/bin/arm64/dxc-macos")
        set(SPIRVCROSS
            "DYLD_LIBRARY_PATH=${CMAKE_CURRENT_SOURCE_DIR}/../../tools/rt64/src/contrib/spirv-cross/lib/arm64"
            "${CMAKE_CURRENT_SOURCE_DIR}/../../tools/rt64/src/contrib/spirv-cross/bin/arm64/spirv-cross")
    endif()
    set(DXC_COMMON_OPTS "-I${CMAKE_CURRENT_SOURCE_DIR}/../../tools/rt64/src")
    set(DXC_DXIL_OPTS "-Wno-ignored-attributes")
    set(DXC_SPV_OPTS "-spirv" "-fspv-target-env=vulkan1.0" "-fvk-use-dx-layout")
    set(DXC_PS_OPTS "${DXC_COMMON_OPTS}" "-E" "PSMain" "-T" "ps_6_0" "-D" "DYNAMIC_RENDER_PARAMS")
    set(DXC_VS_OPTS "${DXC_COMMON_OPTS}" "-E" "VSMain" "-T" "vs_6_0" "-D" "DYNAMIC_RENDER_PARAMS" "-fvk-invert-y")
    set(DXC_CS_OPTS "${DXC_COMMON_OPTS}" "-E" "CSMain" "-T" "cs_6_0")

    set(RECOMP_FRONTEND_N64MODERNRUNTIME_PATH "${N64MODERNRUNTIME_ROOT}")
    set(RECOMP_FRONTEND_RT64_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../../tools/rt64")
    add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/../../tools/RecompFrontend"
                     "${CMAKE_BINARY_DIR}/RecompFrontend")

    add_executable(Turok2Recompiled
        rsp/aspMain.cpp
        src/crash_diagnostics.cpp
        src/entrypoint.cpp
        src/register_overlays.cpp
        src/si.cpp
        src/patches/native_60.cpp
        src/debug_tools.cpp
        src/runner.cpp)

    target_include_directories(Turok2Recompiled PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/RecompiledFuncs"
        "${CMAKE_CURRENT_SOURCE_DIR}/src"
        "${CMAKE_CURRENT_SOURCE_DIR}/src/patches"
        "${N64MODERNRUNTIME_ROOT}/N64Recomp/include"
        "${N64MODERNRUNTIME_ROOT}/librecomp/include"
        "${N64MODERNRUNTIME_ROOT}/ultramodern/include"
        "${RECOMP_FRONTEND_RT64_PATH}/src"
        "${RECOMP_FRONTEND_RT64_PATH}/src/contrib"
        "${RECOMP_FRONTEND_RT64_PATH}/src/contrib/hlslpp/include"
        "${RECOMP_FRONTEND_RT64_PATH}/src/contrib/dxc/inc"
        ${SDL2_INCLUDE_DIRS})

    if(MSVC)
        # -fms-extensions has no counterpart: MSVC already is the extension set.
        target_compile_options(Turok2Recompiled PRIVATE /bigobj)
    else()
        target_compile_options(Turok2Recompiled PRIVATE
            -fno-strict-aliasing
            -fms-extensions)
    endif()

    target_link_libraries(Turok2Recompiled PRIVATE
        Turok2RecompiledFuncs
        recompui
        recompinput
        librecomp
        ultramodern
        rt64)

    # The imported SDL2::SDL2 target only exists via find_package. The vendored
    # Windows copy is plain link libraries plus a link_directories entry.
    if(WIN32)
        target_link_libraries(Turok2Recompiled PRIVATE ${SDL2_LIBRARIES})

        # Off by default so the console stays attached and stderr is readable,
        # which is what makes a failing run on Windows diagnosable at all. Turn
        # it on for a release build to drop the console window. The entry point
        # override is required either way: the source defines SDL_MAIN_HANDLED
        # and provides main, while /SUBSYSTEM:WINDOWS looks for WinMain.
        option(TUROK2_WIN32_GUI "Build without a console window" OFF)
        if(TUROK2_WIN32_GUI)
            set_target_properties(Turok2Recompiled PROPERTIES WIN32_EXECUTABLE TRUE)
            target_link_options(Turok2Recompiled PRIVATE /ENTRY:mainCRTStartup)
        endif()

        # SDL2 is a DLL here, so it has to sit next to the executable. RT64
        # stages the DXC pair into its own binary directory, which is one level
        # away from the exe, so those get copied across too.
        add_custom_command(TARGET Turok2Recompiled POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy_if_different
                    "${TUROK2_SDL2_DIR}/lib/x64/SDL2.dll"
                    "$<TARGET_FILE_DIR:Turok2Recompiled>/SDL2.dll"
            COMMAND ${CMAKE_COMMAND} -E copy_if_different
                    "${TUROK2_RT64_DIR}/src/contrib/dxc/bin/x64/dxcompiler.dll"
                    "$<TARGET_FILE_DIR:Turok2Recompiled>/dxcompiler.dll"
            COMMAND ${CMAKE_COMMAND} -E copy_if_different
                    "${TUROK2_RT64_DIR}/src/contrib/dxc/bin/x64/dxil.dll"
                    "$<TARGET_FILE_DIR:Turok2Recompiled>/dxil.dll")
    else()
        target_link_libraries(Turok2Recompiled PRIVATE SDL2::SDL2)
    endif()

    set(TUROK2_RMLUI_SAMPLE_ASSETS
        "${CMAKE_CURRENT_SOURCE_DIR}/../../tools/RecompFrontend/recompui/lib/RmlUi/Samples/assets")
    add_custom_command(TARGET Turok2Recompiled POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E make_directory
                "$<TARGET_FILE_DIR:Turok2Recompiled>/assets"
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
                "${TUROK2_RMLUI_SAMPLE_ASSETS}/LatoLatin-Regular.ttf"
                "$<TARGET_FILE_DIR:Turok2Recompiled>/assets/LatoLatin-Regular.ttf"
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
                "${TUROK2_RMLUI_SAMPLE_ASSETS}/NotoEmoji-Regular.ttf"
                "$<TARGET_FILE_DIR:Turok2Recompiled>/assets/NotoEmoji-Regular.ttf"
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
                "${CMAKE_CURRENT_SOURCE_DIR}/assets/recomp.rcss"
                "$<TARGET_FILE_DIR:Turok2Recompiled>/assets/recomp.rcss"
        # recompui resolves icons and the button-glyph font relative to
        # assets/. Without these the config and controls pages render empty
        # boxes where every icon and binding label should be.
        COMMAND ${CMAKE_COMMAND} -E copy_directory
                "${CMAKE_CURRENT_SOURCE_DIR}/assets/icons"
                "$<TARGET_FILE_DIR:Turok2Recompiled>/assets/icons"
        COMMAND ${CMAKE_COMMAND} -E copy_directory
                "${CMAKE_CURRENT_SOURCE_DIR}/assets/promptfont"
                "$<TARGET_FILE_DIR:Turok2Recompiled>/assets/promptfont"
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
                "${CMAKE_CURRENT_SOURCE_DIR}/assets/gamecontrollerdb.txt"
                "$<TARGET_FILE_DIR:Turok2Recompiled>/assets/gamecontrollerdb.txt"
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
                "${CMAKE_CURRENT_SOURCE_DIR}/assets/launcher-background.png"
                "$<TARGET_FILE_DIR:Turok2Recompiled>/assets/launcher-background.png"
        COMMAND ${CMAKE_COMMAND} -E make_directory
                "${CMAKE_CURRENT_BINARY_DIR}/runtime-data/mods"
        COMMAND ${CMAKE_COMMAND} -E copy_directory
                "${CMAKE_CURRENT_SOURCE_DIR}/mods"
                "${CMAKE_CURRENT_BINARY_DIR}/runtime-data/mods"
        COMMAND ${CMAKE_COMMAND} -E make_directory
                "${CMAKE_CURRENT_SOURCE_DIR}/build-native/runtime-data/mods"
        COMMAND ${CMAKE_COMMAND} -E copy_directory
                "${CMAKE_CURRENT_SOURCE_DIR}/mods"
                "${CMAKE_CURRENT_SOURCE_DIR}/build-native/runtime-data/mods")
endif()
