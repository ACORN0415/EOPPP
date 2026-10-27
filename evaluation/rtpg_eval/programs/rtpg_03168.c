#include <stdlib.h>
int test_func(void) {
    int v0 = 14;
    int v1 = 24;
    int v2 = 94;
    int v3 = 71;
    int v4 = 67;
    int i;
    v4 = v4 + v4;
    v0 = v0 - v2;
    v0 = v0 * 4;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
