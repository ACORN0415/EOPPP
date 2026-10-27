#include <stdlib.h>
int test_func(void) {
    int v0 = 35;
    int v1 = 93;
    int v2 = 82;
    int v3 = 21;
    int v4 = 28;
    int v5 = 7;
    int v6 = 56;
    int v7 = 50;
    int i;
    v1 = v1 - v6;
    v5 = v5 * 5;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
