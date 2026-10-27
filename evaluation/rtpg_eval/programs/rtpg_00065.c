#include <stdlib.h>
int test_func(void) {
    int v0 = 58;
    int v1 = 43;
    int v2 = 43;
    int i;
    for (i = 0; i < 8; i++) {
        v1 = v1 + v2;
    }
    if (v1 > v0) { v1 = v0; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
