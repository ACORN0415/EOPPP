#include <stdlib.h>
int test_func(void) {
    int v0 = 10;
    int v1 = 89;
    int v2 = 68;
    int v3 = 90;
    int v4 = 24;
    int i;
    v3 = v3 * 2;
    if (v2 > v2) { v2 = v2; }
    for (i = 0; i < 14; i++) {
        v1 = v1 + v0;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
