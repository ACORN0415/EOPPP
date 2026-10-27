#include <stdlib.h>
int __arr_6078[10];
int test_func(void) {
    int v0 = 65;
    int v1 = 36;
    int v2 = 25;
    int v3 = 100;
    int i;
    v1 = v1 * 10;
    for (i = 0; i < 10; i++) { __arr_6078[i] = v3 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
