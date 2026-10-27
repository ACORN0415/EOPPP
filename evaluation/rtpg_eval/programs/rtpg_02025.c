#include <stdlib.h>
int test_func(void) {
    int v0 = 95;
    int v1 = 9;
    int v2 = 91;
    int v3 = 85;
    int i;
    v2 = v2 - v0;
    v0 = v0 + v2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
