#include <stdlib.h>
int test_func(void) {
    int v0 = 56;
    int v1 = 56;
    int v2 = 29;
    int v3 = 51;
    int v4 = 86;
    int v5 = 87;
    int v6 = 24;
    int i;
    v0 = v0 * 2;
    v4 = v4 / (v2 + 1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
