#include <stdlib.h>
int test_func(void) {
    int v0 = 42;
    int v1 = 73;
    int v2 = 27;
    int v3 = 22;
    int v4 = 36;
    int i;
    v2 = v2 - v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
