#include <stdlib.h>
int test_func(void) {
    int v0 = 34;
    int v1 = 65;
    int v2 = 83;
    int v3 = 99;
    int v4 = 3;
    int v5 = 27;
    int v6 = 97;
    int i;
    v1 = v1 + v5;
    v3 = v3 * 6;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    v2 = v2 % (v5 + 1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
