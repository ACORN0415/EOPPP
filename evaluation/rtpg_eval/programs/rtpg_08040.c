#include <stdlib.h>
int test_func(void) {
    int v0 = 8;
    int v1 = 88;
    int v2 = 65;
    int v3 = 38;
    int v4 = 96;
    int v5 = 92;
    int v6 = 68;
    int v7 = 53;
    int i;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
