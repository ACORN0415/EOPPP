#include <stdlib.h>
int test_func(void) {
    int v0 = 25;
    int v1 = 65;
    int v2 = 67;
    int v3 = 3;
    int v4 = 48;
    int i;
    v4 = v4 * 8;
    for (i = 0; i < 8; i++) {
        v3 = v3 + v4;
    }
    if (v1 > v3) { v1 = v3; }
    v3 = v3 ^ v4;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
