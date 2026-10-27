#include <stdlib.h>
int test_func(void) {
    int v0 = 68;
    int v1 = 77;
    int v2 = 92;
    int i;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v0;
    }
    v0 = v0 - v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
