#include <stdlib.h>
int test_func(void) {
    int v0 = 69;
    int v1 = 41;
    int v2 = 99;
    int v3 = 99;
    int i;
    if (v3 > v1) { v3 = v1; }
    v2 = v2 + v1;
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
