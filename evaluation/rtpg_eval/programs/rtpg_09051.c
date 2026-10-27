#include <stdlib.h>
int test_func(void) {
    int v0 = 90;
    int v1 = 89;
    int v2 = 1;
    int v3 = 16;
    int v4 = 98;
    int i;
    for (i = 0; i < 11; i++) {
        v3 = v3 + v3;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
