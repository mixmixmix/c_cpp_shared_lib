#include <stdio.h>
#include "foo_opencv.h"

void FooOpenCV(void);

int main (){
    printf("Starting a C program containing a link to an OpenCV C++ shared library...\n");
    FooOpenCV();
    printf("Back to C program. Bye, bye...\n");
    return 0;
}
 
