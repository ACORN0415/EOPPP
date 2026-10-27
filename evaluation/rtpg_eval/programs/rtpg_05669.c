#include <stdlib.h>
int test_func(void) {
    int v0 = 4;
    int v1 = 47;
    int v2 = 16;
    int v3 = 100;
    int i;
    for (i = 0; i < 13; i++) {
        v2 = v2 + v0;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
