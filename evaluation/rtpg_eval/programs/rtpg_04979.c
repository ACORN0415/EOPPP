#include <stdlib.h>
int __arr_4979[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 37;
    int v2 = 83;
    int v3 = 96;
    int v4 = 22;
    int v5 = 33;
    int v6 = 99;
    int v7 = 51;
    int i;
    for (i = 0; i < 10; i++) { __arr_4979[i] = v4 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
