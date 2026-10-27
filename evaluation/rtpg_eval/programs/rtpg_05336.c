#include <stdlib.h>
int __arr_5336[10];
int test_func(void) {
    int v0 = 84;
    int v1 = 94;
    int v2 = 100;
    int v3 = 64;
    int v4 = 6;
    int v5 = 74;
    int v6 = 61;
    int i;
    for (i = 0; i < 10; i++) { __arr_5336[i] = v2 + i; }
    for (i = 0; i < 20; i++) {
        v1 = v1 + v5;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
