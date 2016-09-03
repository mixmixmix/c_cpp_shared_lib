#!/bin/bash
set -e 
echo "Compiling and testing our shared library using simple gcc commands..."
currentDir="$(pwd)"
echo "g++ -c -Wall -Werror -fpic src/foo.cpp"
g++ -c -Wall -Werror -fpic src/foo.cpp
echo "g++ -shared -o libfoo.so foo.o"
g++ -shared -o libfoo.so foo.o
echo "gcc -L${currentDir} -Wall -o test src/main.c -lfoo"
gcc -L${currentDir} -Wall -o test src/main.c -lfoo
echo "export LD_LIBRARY_PATH=${currentDir}:$LD_LIBRARY_PATH"
export LD_LIBRARY_PATH=${currentDir}:$LD_LIBRARY_PATH
echo "./test" 
./test 
