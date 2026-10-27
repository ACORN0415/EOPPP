#include <stdlib.h>
int __arr_8492[10];
int test_func(void) {
    int v0 = 28;
    int v1 = 11;
    int v2 = 59;
    int i;
    v0 = v0 * 6;
    for (i = 0; i < 10; i++) { __arr_8492[i] = v1 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
