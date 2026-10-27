#include <stdlib.h>
int __arr_343[10];
int test_func(void) {
    int v0 = 71;
    int v1 = 41;
    int v2 = 72;
    int v3 = 60;
    int i;
    for (i = 0; i < 10; i++) { __arr_343[i] = v2 + i; }
    v3 = v3 - v0;
    v3 = v3 * 7;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
