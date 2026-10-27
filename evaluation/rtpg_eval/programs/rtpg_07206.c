#include <stdlib.h>
int test_func(void) {
    int v0 = 20;
    int v1 = 33;
    int v2 = 10;
    int v3 = 43;
    int v4 = 21;
    int v5 = 90;
    int v6 = 89;
    int v7 = 30;
    int i;
    v4 = v4 - v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v7;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
