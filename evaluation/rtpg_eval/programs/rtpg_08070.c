#include <stdlib.h>
int test_func(void) {
    int v0 = 37;
    int v1 = 72;
    int v2 = 34;
    int v3 = 18;
    int i;
    v1 = v1 * 7;
    if (v1 > v2) { v1 = v2; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    v2 = v2 & v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
