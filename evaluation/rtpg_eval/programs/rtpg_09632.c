#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_9632[10];
int test_func(void) {
    int v0 = 7;
    int v1 = 3;
    int v2 = 28;
    int v3 = 79;
    int v4 = 35;
    int v5 = 36;
    int v6 = 34;
    int v7 = 89;
    int i;
    for (i = 0; i < 10; i++) { __arr_9632[i] = v4 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
