#include <stdlib.h>
int test_func(void) {
    int v0 = 45;
    int v1 = 89;
    int v2 = 88;
    int v3 = 4;
    int v4 = 41;
    int v5 = 82;
    int v6 = 21;
    int i;
    v0 = v0 * 6;
    v4 = v4 - v0;
    int *__p = &v3;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
