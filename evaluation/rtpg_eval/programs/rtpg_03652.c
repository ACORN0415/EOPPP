#include <stdlib.h>
int test_func(void) {
    int v0 = 16;
    int v1 = 41;
    int v2 = 15;
    int v3 = 75;
    int v4 = 75;
    int i;
    v4 = v4 + v3;
    for (i = 0; i < 15; i++) {
        v0 = v0 + v2;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
