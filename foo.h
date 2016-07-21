#ifndef foo_h__
#define foo_h__

struct fstru {
  int a;
  float b;
};

/* the following line is required for C program to compile with this unrecognised by C language header */
#ifdef __cplusplus
extern "C" {
#endif

void foo(void);
float addme(float);
float addme2(struct fstru);

#ifdef __cplusplus
}
#endif

#endif
