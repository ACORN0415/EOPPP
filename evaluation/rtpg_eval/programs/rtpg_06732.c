#include <stdlib.h>
int test_func(void) {
    int v0 = 25;
    int v1 = 56;
    int v2 = 100;
    int v3 = 90;
    int i;
    v0 = v0 + v2;
    if (v2 > v1) { v2 = v1; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
