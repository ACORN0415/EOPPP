#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 8;
    int v1 = 62;
    int v2 = 40;
    int v3 = 23;
    int v4 = 8;
    int v5 = 4;
    int v6 = 60;
    int i;
    v4 = v4 + v6;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
