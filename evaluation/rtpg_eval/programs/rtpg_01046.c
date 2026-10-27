#include <stdlib.h>
int __arr_1046[10];
int test_func(void) {
    int v0 = 62;
    int v1 = 31;
    int v2 = 94;
    int v3 = 32;
    int i;
    v2 = v2 * 5;
    for (i = 0; i < 10; i++) { __arr_1046[i] = v2 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
