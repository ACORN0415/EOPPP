#include <stdlib.h>
int test_func(void) {
    int v0 = 56;
    int v1 = 58;
    int v2 = 30;
    int v3 = 65;
    int v4 = 79;
    int v5 = 40;
    int v6 = 15;
    int v7 = 44;
    int i;
    v5 = 50;
    for (i = 0; i < 16; i++) {
        v4 = v4 + v0;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
