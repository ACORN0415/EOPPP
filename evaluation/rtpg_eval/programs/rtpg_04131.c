#include <stdlib.h>
int test_func(void) {
    int v0 = 59;
    int v1 = 5;
    int v2 = 41;
    int v3 = 49;
    int v4 = 77;
    int v5 = 5;
    int v6 = 62;
    int i;
    v6 = v6 + v3;
    v0 = 27;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    int *__p = &v1;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
