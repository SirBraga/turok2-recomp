TARGET := patches.elf
CC ?= clang
LD ?= ld.lld
CFLAGS := -target mips -mips2 -mabi=32 -O2 -G0 -mno-abicalls -mno-odd-spreg \
	-fomit-frame-pointer -ffast-math -fno-unsafe-math-optimizations \
	-Wall -Wextra -Wno-unused-parameter -Wno-unused-variable
CPPFLAGS := -nostdinc -D_LANGUAGE_C -DMIPS -I.
LDFLAGS := -nostdlib -T patches.ld --unresolved-symbols=ignore-all --emit-relocs

C_SRCS := $(wildcard *.c)
C_OBJS := $(C_SRCS:.c=.o)

$(TARGET): $(C_OBJS)
	$(LD) $(C_OBJS) $(LDFLAGS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $< -c -o $@

clean:
	rm -f $(C_OBJS) $(TARGET)

.PHONY: clean
