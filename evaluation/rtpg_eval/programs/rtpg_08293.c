#include <stdlib.h>
int test_func(void) {
    int v0 = 39;
    int v1 = 85;
    int v2 = 17;
    int i;
    for (i = 0; i < 8; i++) {
        v1 = v1 + v1;
    }
    v0 = v0 * 5;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
