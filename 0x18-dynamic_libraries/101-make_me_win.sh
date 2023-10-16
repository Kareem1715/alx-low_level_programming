#!/bin/bash
wget -P /tmp https://github.com/Kareem1715/alx-low_level_programming/tree/master/0x18-dynamic_libraries/lib_rand_numbers.so
export LD_PRELOAD=/tmp/lib_rand_numbers.so
