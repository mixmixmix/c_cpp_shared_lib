#include <stdio.h>
#include "foo.h"

void Foo(void);
float Multiply(float);
float AddStruct(struct myStruct);

int main (){
    printf("Starting a program...\n");
    Foo();

    struct myStruct myNumbers;
    myNumbers.a = 2;
    myNumbers.b = 3.3;

    float num = 3.14;
    printf("Result of multiplying %g by itself is: %g\n", num, Multiply(num));
    printf("Result of adding together myStructure elements a and b is: %g\n", AddStruct(myNumbers));
    return 0;
}
 
