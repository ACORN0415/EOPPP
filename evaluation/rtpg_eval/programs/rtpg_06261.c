#include <stdlib.h>
int __arr_6261[10];
int test_func(void) {
    int v0 = 97;
    int v1 = 26;
    int v2 = 49;
    int v3 = 92;
    int v4 = 98;
    int v5 = 26;
    int i;
    for (i = 0; i < 10; i++) { __arr_6261[i] = v1 + i; }
    v5 = v5 - v4;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
