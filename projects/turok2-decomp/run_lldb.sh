lldb -p $1 << 'LLDB_SCRIPT'
process interrupt
thread backtrace all
quit
LLDB_SCRIPT
