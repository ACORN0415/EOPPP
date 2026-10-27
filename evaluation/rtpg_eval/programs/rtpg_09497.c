#include <stdlib.h>
int __arr_9497[10];
int test_func(void) {
    int v0 = 35;
    int v1 = 99;
    int v2 = 28;
    int v3 = 56;
    int v4 = 41;
    int v5 = 62;
    int v6 = 6;
    int i;
    for (i = 0; i < 10; i++) { __arr_9497[i] = v2 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
