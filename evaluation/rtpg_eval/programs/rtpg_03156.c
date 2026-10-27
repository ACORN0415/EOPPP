#include <stdlib.h>
int test_func(void) {
    int v0 = 42;
    int v1 = 19;
    int v2 = 92;
    int v3 = 60;
    int v4 = 73;
    int v5 = 58;
    int v6 = 97;
    int i;
    for (i = 0; i < 12; i++) {
        v6 = v6 + v5;
    }
    v1 = v1 * 4;
    v1 = v1 + v3;
    v2 = v2 | v5;
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
