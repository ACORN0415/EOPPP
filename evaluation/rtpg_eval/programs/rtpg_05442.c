#include <stdlib.h>
int test_func(void) {
    int v0 = 58;
    int v1 = 81;
    int v2 = 98;
    int v3 = 91;
    int v4 = 58;
    int v5 = 70;
    int v6 = 89;
    int i;
    v3 = 2;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
