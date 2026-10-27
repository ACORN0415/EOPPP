#include <stdlib.h>
int __arr_588[10];
int test_func(void) {
    int v0 = 48;
    int v1 = 58;
    int v2 = 78;
    int v3 = 70;
    int v4 = 82;
    int v5 = 22;
    int v6 = 93;
    int i;
    v6 = 24;
    for (i = 0; i < 10; i++) { __arr_588[i] = v4 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    return v0;
}
int main(void) { return test_func(); }
