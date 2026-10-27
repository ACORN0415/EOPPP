#include <stdlib.h>
int test_func(void) {
    int v0 = 92;
    int v1 = 51;
    int v2 = 73;
    int v3 = 9;
    int i;
    for (i = 0; i < 9; i++) {
        v3 = v3 + v0;
    }
    v3 = v3 * 2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    v1 = v1 | v2;
    return v0;
}
int main(void) { return test_func(); }
