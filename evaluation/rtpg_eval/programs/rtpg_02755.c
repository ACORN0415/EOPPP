#include <stdlib.h>
int __arr_2755[10];
int test_func(void) {
    int v0 = 64;
    int v1 = 83;
    int v2 = 11;
    int v3 = 95;
    int v4 = 89;
    int v5 = 0;
    int v6 = 30;
    int i;
    if (v2 > v4) { v2 = v4; }
    for (i = 0; i < 10; i++) { __arr_2755[i] = v4 + i; }
    v0 = 8;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
