#include <stdlib.h>
int __arr_7930[10];
int test_func(void) {
    int v0 = 4;
    int v1 = 67;
    int v2 = 31;
    int v3 = 17;
    int i;
    for (i = 0; i < 10; i++) { __arr_7930[i] = v2 + i; }
    if (v2 > v2) { v2 = v2; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
