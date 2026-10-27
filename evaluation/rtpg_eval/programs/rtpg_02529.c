#include <stdlib.h>
int __arr_2529[10];
int test_func(void) {
    int v0 = 13;
    int v1 = 15;
    int v2 = 89;
    int v3 = 74;
    int v4 = 20;
    int v5 = 53;
    int v6 = 78;
    int v7 = 96;
    int i;
    for (i = 0; i < 10; i++) { __arr_2529[i] = v5 + i; }
    v4 = v4 - v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
