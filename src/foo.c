#include <stdio.h>
#include <stdlib.h>
#include "foo.h"

void Foo (void){
  printf("\"Hello\" from a function foo from your shared library!\n");
}

float Multiply(float number){
  return number * number;
}


float AddStruct(struct myStruct m){
  return m.a + m.b;
}
