#include <stdlib.h>
int test_func(void) {
    int v0 = 22;
    int v1 = 44;
    int v2 = 42;
    int v3 = 29;
    int i;
    for (i = 0; i < 19; i++) {
        v1 = v1 + v2;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
