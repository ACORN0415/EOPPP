#include <stdlib.h>
int test_func(void) {
    int v0 = 97;
    int v1 = 50;
    int v2 = 79;
    int v3 = 4;
    int v4 = 74;
    int v5 = 77;
    int v6 = 65;
    int v7 = 83;
    int i;
    if (v2 > v1) { v2 = v1; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
