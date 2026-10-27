#include <stdlib.h>
int test_func(void) {
    int v0 = 32;
    int v1 = 91;
    int v2 = 94;
    int v3 = 62;
    int v4 = 2;
    int v5 = 52;
    int i;
    v5 = 64;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
