#include <stdlib.h>
int test_func(void) {
    int v0 = 61;
    int v1 = 54;
    int v2 = 63;
    int v3 = 85;
    int v4 = 81;
    int v5 = 86;
    int v6 = 58;
    int i;
    v5 = 11;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
