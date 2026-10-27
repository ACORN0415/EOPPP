#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_1463[10];
int test_func(void) {
    int v0 = 15;
    int v1 = 89;
    int v2 = 92;
    int v3 = 55;
    int v4 = 47;
    int v5 = 42;
    int v6 = 75;
    int i;
    v4 = v4 + v6;
    for (i = 0; i < 10; i++) { __arr_1463[i] = v5 + i; }
    v1 = __helper(v1);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
