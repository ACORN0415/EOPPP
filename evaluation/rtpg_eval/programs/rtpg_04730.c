#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_4730[10];
int test_func(void) {
    int v0 = 88;
    int v1 = 84;
    int v2 = 48;
    int v3 = 78;
    int v4 = 34;
    int v5 = 47;
    int i;
    for (i = 0; i < 10; i++) { __arr_4730[i] = v5 + i; }
    v4 = __helper(v4);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
