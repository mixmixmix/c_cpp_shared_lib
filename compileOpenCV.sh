#!/bin/bash
set -e
rm -rf build
mkdir build
cd build
cmake ../srcOpenCV
make
cp libopencv_test.so ../
cd ..
gcc -L$PWD -Wall -o test_opencv srcOpenCV/main.c -lopencv_test
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
./test_opencv
