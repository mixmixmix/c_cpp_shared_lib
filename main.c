#include <stdio.h>
#include "foo.h"

void foo(void);
float addme(float);
float addme2(struct fstru);

int main (){
    printf("Starting a program...\n");
    foo();

    struct fstru gg;
    gg.a = 2;
    gg.b = 3.3;

    float g = 3.2;
    printf("Result is: %g\n", addme(g));
    printf("ResultG is: %g\n", addme2(gg));
    return 0;
}
 
