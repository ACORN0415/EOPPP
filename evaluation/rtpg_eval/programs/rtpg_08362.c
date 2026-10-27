#include <stdlib.h>
int test_func(void) {
    int v0 = 66;
    int v1 = 24;
    int v2 = 92;
    int v3 = 78;
    int v4 = 26;
    int v5 = 6;
    int v6 = 39;
    int v7 = 33;
    int i;
    if (v3 > v4) { v3 = v4; }
    v7 = v7 + v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
