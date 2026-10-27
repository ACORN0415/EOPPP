#include <stdlib.h>
int test_func(void) {
    int v0 = 98;
    int v1 = 56;
    int v2 = 44;
    int v3 = 28;
    int v4 = 36;
    int i;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
