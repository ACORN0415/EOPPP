#include <stdlib.h>
int __arr_8135[10];
int test_func(void) {
    int v0 = 10;
    int v1 = 91;
    int v2 = 96;
    int v3 = 76;
    int v4 = 15;
    int v5 = 80;
    int v6 = 80;
    int i;
    for (i = 0; i < 10; i++) { __arr_8135[i] = v1 + i; }
    v5 = 23;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
