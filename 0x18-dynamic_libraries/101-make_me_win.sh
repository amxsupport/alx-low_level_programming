#!/bin/bash
wget -P .. https://github.com/amxsupport/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD="$PWD/../libgiga.so"
