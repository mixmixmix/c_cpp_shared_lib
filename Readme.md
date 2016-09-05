#Shared library written in C++ providing C interface

##Sources
- http://www.cprogramming.com/tutorial/shared-libraries-linux-gcc.html
- https://isocpp.org/wiki/faq/mixing-c-and-cpp
- http://stackoverflow.com/questions/199418/using-c-library-in-c-code

##How to compile using cmake:
`compile-with-cmake.sh`
##How to compile using gcc:

Use `compile.sh` script which does more or less that:
```
$ g++ -c -Wall -Werror -fpic foo.cpp 
$ g++ -shared -o libfoo.so foo.o 
$ gcc -L/home/mix/tmp -Wall -o test main.c -lfoo
$ export LD_LIBRARY_PATH=/home/mix/tmp:$LD_LIBRARY_PATH
$ ./test 
```


##How to compile with OpenCV using cmake:
Make sure you have opencv installed and that it maches location in CMakeLists.txt file in `srcOpenCV` directory. Build and test library using `compileOpenCv.sh`
