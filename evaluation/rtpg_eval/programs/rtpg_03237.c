#include <stdlib.h>
int __arr_3237[10];
int test_func(void) {
    int v0 = 10;
    int v1 = 72;
    int v2 = 47;
    int v3 = 55;
    int v4 = 79;
    int i;
    for (i = 0; i < 10; i++) { __arr_3237[i] = v3 + i; }
    for (i = 0; i < 17; i++) {
        v3 = v3 + v4;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
