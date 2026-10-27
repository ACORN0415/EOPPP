#include <stdlib.h>
int test_func(void) {
    int v0 = 17;
    int v1 = 43;
    int v2 = 80;
    int i;
    v2 = 99;
    v0 = v0 - v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
