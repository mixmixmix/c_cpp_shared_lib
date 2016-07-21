#Shared library written in C++ providing C interface

##Sources
- http://www.cprogramming.com/tutorial/shared-libraries-linux-gcc.html
- https://isocpp.org/wiki/faq/mixing-c-and-cpp
- http://stackoverflow.com/questions/199418/using-c-library-in-c-code

##How to compile:
```
mix@mixpad  ~/tmp  g++ -c -Wall -Werror -fpic foo.cpp 
mix@mixpad  ~/tmp  g++ -shared -o libfoo.so foo.o 
mix@mixpad  ~/tmp  gcc -L/home/mix/tmp -Wall -o test main.c -lfoo
mix@mixpad  ~/tmp  ./test 
```
