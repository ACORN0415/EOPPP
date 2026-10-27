#include <stdlib.h>
int __arr_6966[10];
int test_func(void) {
    int v0 = 21;
    int v1 = 16;
    int v2 = 11;
    int i;
    for (i = 0; i < 10; i++) { __arr_6966[i] = v2 + i; }
    if (v0 > v0) { v0 = v0; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
