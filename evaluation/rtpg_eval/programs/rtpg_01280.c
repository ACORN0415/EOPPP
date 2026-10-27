#include <stdlib.h>
int test_func(void) {
    int v0 = 12;
    int v1 = 68;
    int v2 = 61;
    int v3 = 30;
    int v4 = 16;
    int v5 = 29;
    int i;
    if (v2 > v4) { v2 = v4; }
    v2 = v2 - v5;
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
