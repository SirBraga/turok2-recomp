import re
path = '../../tools/N64ModernRuntime/ultramodern/src/mesgqueue.cpp'
with open(path, 'r') as f:
    code = f.read()

new_code = code.replace(
'''extern "C" s32 osRecvMesg(RDRAM_ARG PTR(OSMesgQueue) mq_, PTR(OSMesg) msg_, s32 flags) {
    OSMesgQueue* mq = TO_PTR(OSMesgQueue, mq_);''',
'''extern "C" s32 osRecvMesg(RDRAM_ARG PTR(OSMesgQueue) mq_, PTR(OSMesg) msg_, s32 flags) {
    if (flags == 1) { // OS_MESG_BLOCK
        printf("osRecvMesg blocking on mq_ = %08X\\n", mq_);
    }
    OSMesgQueue* mq = TO_PTR(OSMesgQueue, mq_);''')

with open(path, 'w') as f:
    f.write(new_code)
