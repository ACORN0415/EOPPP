#include <stdlib.h>
int test_func(void) {
    int v0 = 15;
    int v1 = 78;
    int v2 = 27;
    int v3 = 55;
    int v4 = 76;
    int v5 = 88;
    int v6 = 65;
    int v7 = 27;
    int i;
    for (i = 0; i < 7; i++) {
        v4 = v4 + v0;
    }
    v0 = v0 * 7;
    v4 = 41;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
