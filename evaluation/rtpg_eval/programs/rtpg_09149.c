#include <stdlib.h>
int test_func(void) {
    int v0 = 55;
    int v1 = 76;
    int v2 = 4;
    int v3 = 49;
    int v4 = 10;
    int v5 = 59;
    int i;
    if (v5 > v4) { v5 = v4; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
