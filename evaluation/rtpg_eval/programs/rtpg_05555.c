#include <stdlib.h>
int __arr_5555[10];
int test_func(void) {
    int v0 = 40;
    int v1 = 83;
    int v2 = 52;
    int v3 = 19;
    int v4 = 56;
    int v5 = 26;
    int v6 = 86;
    int v7 = 53;
    int i;
    for (i = 0; i < 10; i++) { __arr_5555[i] = v2 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
