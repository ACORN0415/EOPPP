#include <stdlib.h>
int __arr_4336[10];
int test_func(void) {
    int v0 = 49;
    int v1 = 88;
    int v2 = 59;
    int v3 = 55;
    int i;
    for (i = 0; i < 10; i++) { __arr_4336[i] = v2 + i; }
    v0 = v0 - v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
