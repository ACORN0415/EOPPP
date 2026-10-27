#include <stdlib.h>
int test_func(void) {
    int v0 = 62;
    int v1 = 82;
    int v2 = 28;
    int v3 = 54;
    int v4 = 66;
    int v5 = 44;
    int v6 = 30;
    int i;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
