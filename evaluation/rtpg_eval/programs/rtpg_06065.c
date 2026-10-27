#include <stdlib.h>
int __arr_6065[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 91;
    int v1 = 63;
    int v2 = 77;
    int v3 = 92;
    int v4 = 2;
    int v5 = 73;
    int v6 = 21;
    int i;
    for (i = 0; i < 20; i++) {
        v5 = v5 + v5;
    }
    for (i = 0; i < 10; i++) { __arr_6065[i] = v4 + i; }
    v6 = v6 + v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    v5 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
