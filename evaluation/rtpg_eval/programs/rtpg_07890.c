#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 12;
    int v1 = 58;
    int v2 = 98;
    int v3 = 49;
    int v4 = 72;
    int v5 = 20;
    int v6 = 100;
    int v7 = 3;
    int i;
    v6 = v6 + v4;
    v7 = v7 - v3;
    v5 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v7;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
