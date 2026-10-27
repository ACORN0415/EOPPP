#include <stdlib.h>
int test_func(void) {
    int v0 = 1;
    int v1 = 75;
    int v2 = 62;
    int v3 = 25;
    int v4 = 87;
    int v5 = 88;
    int v6 = 68;
    int i;
    v3 = v3 & v4;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
