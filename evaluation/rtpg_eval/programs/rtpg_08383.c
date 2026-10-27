#include <stdlib.h>
int test_func(void) {
    int v0 = 56;
    int v1 = 38;
    int v2 = 26;
    int v3 = 85;
    int v4 = 41;
    int v5 = 3;
    int i;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
