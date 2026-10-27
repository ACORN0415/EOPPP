#include <stdlib.h>
int __arr_6253[10];
int test_func(void) {
    int v0 = 73;
    int v1 = 60;
    int v2 = 42;
    int v3 = 84;
    int v4 = 24;
    int v5 = 33;
    int v6 = 12;
    int i;
    for (i = 0; i < 10; i++) { __arr_6253[i] = v4 + i; }
    v5 = v5 * 8;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
