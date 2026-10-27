#include <stdlib.h>
int test_func(void) {
    int v0 = 26;
    int v1 = 31;
    int v2 = 65;
    int v3 = 51;
    int v4 = 23;
    int i;
    v2 = v2 + v4;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
