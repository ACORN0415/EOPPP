#include <stdlib.h>
int test_func(void) {
    int v0 = 94;
    int v1 = 46;
    int v2 = 19;
    int v3 = 11;
    int v4 = 59;
    int v5 = 67;
    int i;
    if (v4 > v0) { v4 = v0; }
    v1 = v1 + v4;
    v4 = v4 - v0;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
