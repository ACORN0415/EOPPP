#include <stdlib.h>
int test_func(void) {
    int v0 = 82;
    int v1 = 89;
    int v2 = 33;
    int v3 = 14;
    int v4 = 99;
    int v5 = 89;
    int v6 = 23;
    int i;
    v5 = v5 + v4;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
