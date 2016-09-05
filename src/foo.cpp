#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "foo.h"

void Foo (void){
  printf("\"Hello\" from a function foo from your shared library!\n");
}

float Multiply(float number){
  return number * number;
}


float AddStruct(struct myStruct m){
  std::cout << "Adding structures in this cpp function AddStruct()." << std::endl;
  return m.a + m.b;
}
