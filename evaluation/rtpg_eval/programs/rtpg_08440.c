#include <stdlib.h>
int test_func(void) {
    int v0 = 97;
    int v1 = 100;
    int v2 = 88;
    int v3 = 32;
    int v4 = 41;
    int v5 = 12;
    int i;
    if (v3 > v2) { v3 = v2; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
