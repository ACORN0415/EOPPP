#include <stdlib.h>
int test_func(void) {
    int v0 = 3;
    int v1 = 48;
    int v2 = 9;
    int v3 = 24;
    int v4 = 14;
    int v5 = 89;
    int i;
    v2 = v2 + v3;
    if (v1 > v0) { v1 = v0; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
