import re
path = '../../tools/N64ModernRuntime/ultramodern/src/mesgqueue.cpp'
with open(path, 'r') as f:
    code = f.read()

new_code = code.replace(
'''    if (flags == 1) { // OS_MESG_BLOCK
        printf("osRecvMesg blocking on mq_ = %08X\\n", mq_);
    }''',
'''    if (flags == 1) { // OS_MESG_BLOCK
        printf("osRecvMesg blocking on mq_ = %08X\\n", mq_);
        fflush(stdout);
    }''')

with open(path, 'w') as f:
    f.write(new_code)
