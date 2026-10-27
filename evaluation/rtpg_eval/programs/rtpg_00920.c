#include <stdlib.h>
int test_func(void) {
    int v0 = 100;
    int v1 = 63;
    int v2 = 91;
    int v3 = 82;
    int v4 = 59;
    int i;
    int *__p = &v3;
    *__p = *__p + 1;
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
