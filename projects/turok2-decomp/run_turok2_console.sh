#!/bin/bash
TUROK2_ENABLE_INPUT=1 TUROK2_AUTO_START=4 TUROK2_AUTO_A=45 TUROK2_PRESENTATION_MODE=console TUROK2_RUNTIME_DIAGNOSTICS=1 ./build-app/Turok2Recompiled ./baserom.us.z64 > /tmp/turok2-console-newgame.log 2>&1
