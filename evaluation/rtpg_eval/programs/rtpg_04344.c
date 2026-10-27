#include <stdlib.h>
int __arr_4344[10];
int test_func(void) {
    int v0 = 85;
    int v1 = 66;
    int v2 = 55;
    int v3 = 91;
    int i;
    for (i = 0; i < 10; i++) { __arr_4344[i] = v1 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    v3 = v3 ^ v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
