#include <stdlib.h>
int test_func(void) {
    int v0 = 21;
    int v1 = 67;
    int v2 = 46;
    int v3 = 11;
    int v4 = 80;
    int v5 = 76;
    int i;
    v5 = v5 + v4;
    if (v4 > v2) { v4 = v2; }
    v1 = 57;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    v4 = v4 | v0;
    return v0;
}
int main(void) { return test_func(); }
