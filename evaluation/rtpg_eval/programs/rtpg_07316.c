#include <stdlib.h>
int test_func(void) {
    int v0 = 31;
    int v1 = 41;
    int v2 = 15;
    int v3 = 23;
    int v4 = 16;
    int v5 = 68;
    int v6 = 92;
    int v7 = 50;
    int i;
    v4 = v4 - v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    int *__p = &v1;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v7 = v7 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
