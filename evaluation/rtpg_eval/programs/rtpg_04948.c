#include <stdlib.h>
int test_func(void) {
    int v0 = 65;
    int v1 = 86;
    int v2 = 23;
    int v3 = 94;
    int i;
    for (i = 0; i < 10; i++) {
        v3 = v3 + v0;
    }
    if (v0 > v3) { v0 = v3; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
