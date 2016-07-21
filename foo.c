#include <stdio.h>
#include <stdlib.h>
#include "foo.h"

void foo (void){
  printf("hello From Foo\n");
}

float addme(float g){
  return g + 3;
}


float addme2(struct fstru g){
  return g.a + g.b;
}
