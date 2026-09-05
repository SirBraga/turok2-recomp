import re
path = '../../tools/N64ModernRuntime/ultramodern/src/events.cpp'
with open(path, 'r') as f:
    code = f.read()

new_code = code.replace(
'''    switch (event_id) {
        case OS_EVENT_SP:''',
'''    switch (event_id) {
        case 14:
            events_context.vi.get_next_state()->mq = mq_;
            events_context.vi.get_next_state()->msg = msg;
            events_context.vi.get_next_state()->retrace_count = 1;
            break;
        case OS_EVENT_SP:''')

with open(path, 'w') as f:
    f.write(new_code)
