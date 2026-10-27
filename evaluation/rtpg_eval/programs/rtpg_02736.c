#include <stdlib.h>
int test_func(void) {
    int v0 = 57;
    int v1 = 45;
    int v2 = 53;
    int v3 = 57;
    int i;
    if (v0 > v0) { v0 = v0; }
    v0 = v0 - v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
