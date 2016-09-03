#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "foo.h"

void foo (void){
  printf("hello From Foo\n");
}

float addme(float g){
  return g + 3;
}


float addme2(struct fstru g){
  std::cout << "A kkuku" << std::endl;
  return g.a + g.b;
}
