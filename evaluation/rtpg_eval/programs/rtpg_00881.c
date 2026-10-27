#include <stdlib.h>
int test_func(void) {
    int v0 = 50;
    int v1 = 72;
    int v2 = 82;
    int i;
    if (v1 > v1) { v1 = v1; }
    v1 = v1 * 3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
