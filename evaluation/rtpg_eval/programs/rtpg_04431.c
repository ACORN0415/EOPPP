#include <stdlib.h>
int test_func(void) {
    int v0 = 75;
    int v1 = 35;
    int v2 = 92;
    int v3 = 1;
    int i;
    for (i = 0; i < 12; i++) {
        v3 = v3 + v2;
    }
    int *__p = &v3;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
