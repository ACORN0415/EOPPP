#include <stdlib.h>
int __arr_3350[10];
int test_func(void) {
    int v0 = 74;
    int v1 = 23;
    int v2 = 70;
    int v3 = 19;
    int v4 = 23;
    int v5 = 26;
    int v6 = 64;
    int v7 = 28;
    int i;
    for (i = 0; i < 10; i++) { __arr_3350[i] = v6 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
