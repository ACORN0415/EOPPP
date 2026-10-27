#include <stdlib.h>
int __arr_1305[10];
int test_func(void) {
    int v0 = 50;
    int v1 = 56;
    int v2 = 43;
    int v3 = 22;
    int i;
    v1 = 76;
    for (i = 0; i < 10; i++) { __arr_1305[i] = v2 + i; }
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
