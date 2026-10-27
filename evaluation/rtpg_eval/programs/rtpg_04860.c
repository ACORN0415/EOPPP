#include <stdlib.h>
int __arr_4860[10];
int test_func(void) {
    int v0 = 95;
    int v1 = 68;
    int v2 = 46;
    int i;
    for (i = 0; i < 10; i++) { __arr_4860[i] = v1 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
