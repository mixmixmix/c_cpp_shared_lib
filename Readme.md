#How to compile:
 ✘ mix@mixpad  ~/tmp  g++ -c -Wall -Werror -fpic foo.cpp            
 mix@mixpad  ~/tmp  g++ -shared -o libfoo.so foo.o                
 mix@mixpad  ~/tmp  gcc -L/home/mix/tmp -Wall -o test main.c -lfoo
 mix@mixpad  ~/tmp  ./test 
