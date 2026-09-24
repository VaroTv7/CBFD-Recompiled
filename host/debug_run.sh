#!/bin/sh
# Run the host under gdb and print the faulting thread's backtrace (or, if it
# doesn't crash within SECONDS, every game thread's). Run from the repo root in WSL:
#   sh host/debug_run.sh [SECONDS]
SECONDS_TO_RUN=${1:-20}
cd host/build || exit 1
cat > /tmp/conker_gdb <<EOF
set pagination off
set print thread-events off
handle SIGINT stop print
run --rom ../../baserom.us.z64
bt 16
thread apply all bt 8
kill
quit
EOF
( sleep "$SECONDS_TO_RUN"; pkill -INT -f "ConkerRecomp --rom" ) &
gdb -q -batch -x /tmp/conker_gdb ./ConkerRecomp > gdb.log 2>&1
grep -E "received signal|^#|^Thread .*Game Thread" gdb.log | grep -vE " in (std::|__futex|__GI|do_futex|moodycamel|start_thread|clone|__libc|__syscall)" | head -60
