#include <stdlib.h>
int test_func(void) {
    int v0 = 9;
    int v1 = 62;
    int v2 = 77;
    int i;
    for (i = 0; i < 8; i++) {
        v1 = v1 + v2;
    }
    v0 = v0 * 2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
