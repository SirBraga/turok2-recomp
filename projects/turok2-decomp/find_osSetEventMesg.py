import struct
with open('baserom.us.z64', 'rb') as f:
    rom = f.read()

# Pattern for osSetEventMesg inline mfc0 and array store
# 40086000 = mfc0 t0, C0_SR
# 000410C0 = sll v0, a0, 3 (a0 is e, v0 is index) OR 0004xxC0
# AC650000 = sw a1, 0(v1) OR similar store
# AC660004 = sw a2, 4(v1) OR similar store

for i in range(0, len(rom), 4):
    if rom[i:i+4] == b'\x40\x08\x60\x00':
        # Let's check the next ~32 instructions (128 bytes) for stores at offset 0 and 4
        chunk = rom[i:i+128]
        if b'\x00\x04' in chunk and b'\x00\x00' in chunk and b'\x00\x04' in chunk:
            # specifically sw a1, 0(v1) -> AC 65 00 00
            # sw a2, 4(v1) -> AC 66 00 04
            # OR if a1 (r5), a2 (r6) are saved to s0, s1, etc.
            # let's just disassemble the chunk!
            pass

