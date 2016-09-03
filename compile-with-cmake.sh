#!/bin/bash
set -e
rm -rf build
mkdir build
cd build
cmake ../src
make
cp libcmake_test.so ../
cd ..
gcc -L$PWD -Wall -o test_cmake src/main.c -lcmake_test
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
./test_cmake
