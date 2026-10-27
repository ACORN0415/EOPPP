#include <stdlib.h>
int test_func(void) {
    int v0 = 6;
    int v1 = 40;
    int v2 = 48;
    int v3 = 31;
    int i;
    v0 = 20;
    for (i = 0; i < 12; i++) {
        v2 = v2 + v2;
    }
    v0 = v0 * 7;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
