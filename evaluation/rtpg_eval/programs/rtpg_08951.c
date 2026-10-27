#include <stdlib.h>
int test_func(void) {
    int v0 = 75;
    int v1 = 18;
    int v2 = 91;
    int v3 = 37;
    int v4 = 99;
    int v5 = 53;
    int v6 = 3;
    int v7 = 95;
    int i;
    for (i = 0; i < 8; i++) {
        v5 = v5 + v7;
    }
    v3 = v3 - v7;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
