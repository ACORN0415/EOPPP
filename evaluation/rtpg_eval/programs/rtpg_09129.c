#include <stdlib.h>
int test_func(void) {
    int v0 = 42;
    int v1 = 50;
    int v2 = 53;
    int v3 = 83;
    int v4 = 4;
    int v5 = 71;
    int v6 = 61;
    int v7 = 46;
    int i;
    v1 = v1 - v0;
    if (v0 > v2) { v0 = v2; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
