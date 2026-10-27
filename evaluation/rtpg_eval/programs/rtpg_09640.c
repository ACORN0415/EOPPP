#include <stdlib.h>
int test_func(void) {
    int v0 = 74;
    int v1 = 18;
    int v2 = 96;
    int v3 = 96;
    int v4 = 2;
    int v5 = 8;
    int v6 = 10;
    int i;
    if (v2 > v1) { v2 = v1; }
    v2 = v2 + v6;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
