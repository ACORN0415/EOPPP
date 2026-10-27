#include <stdlib.h>
int __arr_4775[10];
int test_func(void) {
    int v0 = 57;
    int v1 = 12;
    int v2 = 81;
    int v3 = 8;
    int v4 = 32;
    int v5 = 63;
    int i;
    v2 = v2 * 5;
    for (i = 0; i < 18; i++) {
        v0 = v0 + v5;
    }
    for (i = 0; i < 10; i++) { __arr_4775[i] = v0 + i; }
    v0 = v0 | v2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
