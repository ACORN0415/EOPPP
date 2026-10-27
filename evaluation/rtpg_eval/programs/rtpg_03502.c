#include <stdlib.h>
int test_func(void) {
    int v0 = 82;
    int v1 = 54;
    int v2 = 2;
    int v3 = 53;
    int i;
    v2 = v2 - v3;
    for (i = 0; i < 15; i++) {
        v0 = v0 + v1;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
