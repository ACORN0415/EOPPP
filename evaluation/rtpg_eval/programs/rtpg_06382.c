#include <stdlib.h>
int test_func(void) {
    int v0 = 97;
    int v1 = 18;
    int v2 = 29;
    int i;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v2;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
