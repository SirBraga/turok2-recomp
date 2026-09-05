OUTPUT_ARCH(mips)
ENTRY(_start)

SECTIONS {
    .recomp_patch 0x8F000000 : {
        *(.recomp_patch)
        *(.recomp_hook.*)
        *(.recomp_hook_return.*)
        *(.text)
    }
}
