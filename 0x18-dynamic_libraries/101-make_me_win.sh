#!/bin/bash
wget -P .. https://github.com/MokiEng/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD="$PWD/../libtest.so"
