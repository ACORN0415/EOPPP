#include <stdlib.h>
int __arr_2011[10];
int test_func(void) {
    int v0 = 38;
    int v1 = 10;
    int v2 = 1;
    int v3 = 90;
    int v4 = 62;
    int i;
    if (v2 > v0) { v2 = v0; }
    for (i = 0; i < 10; i++) { __arr_2011[i] = v1 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
