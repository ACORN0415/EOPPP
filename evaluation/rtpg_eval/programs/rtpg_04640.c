#include <stdlib.h>
int __arr_4640[10];
int test_func(void) {
    int v0 = 64;
    int v1 = 86;
    int v2 = 30;
    int v3 = 6;
    int v4 = 20;
    int v5 = 14;
    int v6 = 19;
    int v7 = 12;
    int i;
    for (i = 0; i < 10; i++) { __arr_4640[i] = v7 + i; }
    v1 = 41;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
