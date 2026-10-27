#include <stdlib.h>
int test_func(void) {
    int v0 = 32;
    int v1 = 46;
    int v2 = 19;
    int v3 = 17;
    int v4 = 5;
    int i;
    v3 = v3 * 8;
    v4 = v4 + v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
