#include <stdlib.h>
int test_func(void) {
    int v0 = 60;
    int v1 = 67;
    int v2 = 19;
    int i;
    v0 = v0 * 3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
