#include <stdlib.h>
int __arr_9283[10];
int test_func(void) {
    int v0 = 1;
    int v1 = 81;
    int v2 = 42;
    int v3 = 26;
    int v4 = 59;
    int v5 = 66;
    int v6 = 31;
    int v7 = 98;
    int i;
    for (i = 0; i < 10; i++) { __arr_9283[i] = v0 + i; }
    v6 = v6 - v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
