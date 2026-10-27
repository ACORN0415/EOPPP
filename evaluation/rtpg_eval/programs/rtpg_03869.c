#include <stdlib.h>
int test_func(void) {
    int v0 = 47;
    int v1 = 14;
    int v2 = 15;
    int v3 = 4;
    int v4 = 66;
    int i;
    for (i = 0; i < 17; i++) {
        v4 = v4 + v2;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
