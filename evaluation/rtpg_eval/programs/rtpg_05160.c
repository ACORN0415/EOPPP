#include <stdlib.h>
int __arr_5160[10];
int test_func(void) {
    int v0 = 75;
    int v1 = 90;
    int v2 = 49;
    int v3 = 5;
    int v4 = 94;
    int v5 = 11;
    int v6 = 26;
    int i;
    for (i = 0; i < 10; i++) { __arr_5160[i] = v2 + i; }
    for (i = 0; i < 13; i++) {
        v0 = v0 + v0;
    }
    if (v0 > v4) { v0 = v4; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
