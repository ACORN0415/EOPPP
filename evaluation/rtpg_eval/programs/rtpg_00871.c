#include <stdlib.h>
int __arr_871[10];
int test_func(void) {
    int v0 = 88;
    int v1 = 5;
    int v2 = 63;
    int v3 = 89;
    int i;
    for (i = 0; i < 10; i++) { __arr_871[i] = v1 + i; }
    v2 = 61;
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
