#include <stdlib.h>
int test_func(void) {
    int v0 = 89;
    int v1 = 90;
    int v2 = 16;
    int v3 = 76;
    int v4 = 74;
    int v5 = 9;
    int v6 = 38;
    int v7 = 72;
    int i;
    v4 = 85;
    v7 = v7 + v3;
    v0 = v0 - v6;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v7;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v7;
    return v0;
}
int main(void) { return test_func(); }
