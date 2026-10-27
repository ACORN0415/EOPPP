#include <stdlib.h>
int test_func(void) {
    int v0 = 69;
    int v1 = 15;
    int v2 = 65;
    int v3 = 46;
    int v4 = 29;
    int v5 = 77;
    int i;
    v0 = v0 * 4;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
