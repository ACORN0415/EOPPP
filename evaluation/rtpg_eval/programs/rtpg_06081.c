#include <stdlib.h>
int __arr_6081[10];
int test_func(void) {
    int v0 = 60;
    int v1 = 56;
    int v2 = 9;
    int v3 = 69;
    int v4 = 74;
    int i;
    v2 = v2 * 4;
    for (i = 0; i < 10; i++) { __arr_6081[i] = v2 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
