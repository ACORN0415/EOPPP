#include <stdlib.h>
int test_func(void) {
    int v0 = 76;
    int v1 = 29;
    int v2 = 85;
    int v3 = 24;
    int v4 = 7;
    int v5 = 28;
    int v6 = 54;
    int v7 = 19;
    int i;
    if (v2 > v7) { v2 = v7; }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v7 = v7 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
