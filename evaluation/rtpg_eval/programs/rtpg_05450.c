#include <stdlib.h>
int test_func(void) {
    int v0 = 43;
    int v1 = 24;
    int v2 = 91;
    int v3 = 71;
    int i;
    for (i = 0; i < 8; i++) {
        v3 = v3 + v0;
    }
    v0 = v0 + v3;
    int *__p = &v2;
    *__p = *__p + 1;
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
