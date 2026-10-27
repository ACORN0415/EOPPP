#include <stdlib.h>
int test_func(void) {
    int v0 = 69;
    int v1 = 76;
    int v2 = 53;
    int i;
    v0 = v0 * 10;
    for (i = 0; i < 6; i++) {
        v0 = v0 + v1;
    }
    v0 = v0 - v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
