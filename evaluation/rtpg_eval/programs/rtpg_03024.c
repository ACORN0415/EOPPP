#include <stdlib.h>
int test_func(void) {
    int v0 = 89;
    int v1 = 50;
    int v2 = 67;
    int v3 = 76;
    int v4 = 29;
    int v5 = 54;
    int i;
    for (i = 0; i < 17; i++) {
        v4 = v4 + v1;
    }
    v4 = v4 * 4;
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
