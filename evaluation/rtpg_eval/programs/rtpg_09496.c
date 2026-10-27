#include <stdlib.h>
int test_func(void) {
    int v0 = 54;
    int v1 = 44;
    int v2 = 88;
    int v3 = 39;
    int i;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    v2 = v2 / (v0 + 1);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
