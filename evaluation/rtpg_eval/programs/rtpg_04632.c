#include <stdlib.h>
int __arr_4632[10];
int test_func(void) {
    int v0 = 97;
    int v1 = 36;
    int v2 = 25;
    int v3 = 43;
    int i;
    v3 = v3 - v2;
    for (i = 0; i < 10; i++) { __arr_4632[i] = v0 + i; }
    v3 = v3 + v0;
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
