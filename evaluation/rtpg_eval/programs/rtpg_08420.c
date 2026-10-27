#include <stdlib.h>
int test_func(void) {
    int v0 = 79;
    int v1 = 69;
    int v2 = 29;
    int v3 = 63;
    int v4 = 69;
    int v5 = 42;
    int v6 = 67;
    int i;
    for (i = 0; i < 20; i++) {
        v2 = v2 + v2;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
