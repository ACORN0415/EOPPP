#include <stdlib.h>
int test_func(void) {
    int v0 = 49;
    int v1 = 20;
    int v2 = 64;
    int v3 = 71;
    int v4 = 12;
    int i;
    v3 = v3 ^ v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
