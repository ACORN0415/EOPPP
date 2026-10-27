#include <stdlib.h>
int test_func(void) {
    int v0 = 3;
    int v1 = 23;
    int v2 = 45;
    int v3 = 98;
    int i;
    v0 = 73;
    for (i = 0; i < 15; i++) {
        v2 = v2 + v3;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
