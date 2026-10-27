#include <stdlib.h>
int test_func(void) {
    int v0 = 21;
    int v1 = 13;
    int v2 = 61;
    int v3 = 35;
    int v4 = 87;
    int i;
    for (i = 0; i < 19; i++) {
        v3 = v3 + v0;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
