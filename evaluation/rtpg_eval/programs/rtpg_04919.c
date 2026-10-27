#include <stdlib.h>
int test_func(void) {
    int v0 = 98;
    int v1 = 64;
    int v2 = 87;
    int v3 = 4;
    int v4 = 2;
    int v5 = 82;
    int v6 = 47;
    int i;
    v5 = v5 * 8;
    for (i = 0; i < 19; i++) {
        v1 = v1 + v4;
    }
    v2 = v2 + v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
