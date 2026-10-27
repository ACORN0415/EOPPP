#include <stdlib.h>
int test_func(void) {
    int v0 = 0;
    int v1 = 61;
    int v2 = 99;
    int v3 = 89;
    int v4 = 80;
    int v5 = 89;
    int i;
    for (i = 0; i < 6; i++) {
        v0 = v0 + v2;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
