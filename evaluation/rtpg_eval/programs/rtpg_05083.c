#include <stdlib.h>
int test_func(void) {
    int v0 = 13;
    int v1 = 89;
    int v2 = 85;
    int v3 = 85;
    int i;
    if (v2 > v0) { v2 = v0; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    v2 = v2 / (v1 + 1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
