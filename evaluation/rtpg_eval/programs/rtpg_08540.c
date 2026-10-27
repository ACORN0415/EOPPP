#include <stdlib.h>
int test_func(void) {
    int v0 = 22;
    int v1 = 52;
    int v2 = 86;
    int v3 = 95;
    int v4 = 2;
    int v5 = 13;
    int v6 = 67;
    int v7 = 42;
    int i;
    v6 = v6 - v1;
    for (i = 0; i < 14; i++) {
        v3 = v3 + v0;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    v5 = v5 & v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
