#include <stdlib.h>
int __arr_9413[10];
int test_func(void) {
    int v0 = 87;
    int v1 = 74;
    int v2 = 46;
    int v3 = 24;
    int v4 = 14;
    int v5 = 67;
    int v6 = 90;
    int i;
    v6 = v6 - v5;
    for (i = 0; i < 10; i++) { __arr_9413[i] = v4 + i; }
    for (i = 0; i < 5; i++) {
        v3 = v3 + v6;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
