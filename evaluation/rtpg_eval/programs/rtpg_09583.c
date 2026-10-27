#include <stdlib.h>
int test_func(void) {
    int v0 = 51;
    int v1 = 84;
    int v2 = 5;
    int v3 = 33;
    int v4 = 81;
    int i;
    v3 = v3 - v4;
    for (i = 0; i < 11; i++) {
        v1 = v1 + v1;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
