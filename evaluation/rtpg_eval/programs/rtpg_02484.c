#include <stdlib.h>
int __arr_2484[10];
int test_func(void) {
    int v0 = 80;
    int v1 = 44;
    int v2 = 16;
    int v3 = 87;
    int v4 = 66;
    int i;
    for (i = 0; i < 10; i++) { __arr_2484[i] = v4 + i; }
    v1 = v1 + v2;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
