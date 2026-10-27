#include <stdlib.h>
int test_func(void) {
    int v0 = 12;
    int v1 = 63;
    int v2 = 2;
    int v3 = 98;
    int v4 = 89;
    int v5 = 99;
    int i;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
