#ifndef foo_h__
#define foo_h__

struct myStruct {
  int a;
  float b;
};

/* the following line is required for C program to compile with this unrecognised by C language header */
#ifdef __cplusplus
extern "C" {
#endif

void Foo(void);
float Multiply(float);
float AddStruct(struct myStruct);

#ifdef __cplusplus
}
#endif

#endif
