#include <stdlib.h>
int test_func(void) {
    int v0 = 16;
    int v1 = 62;
    int v2 = 80;
    int v3 = 6;
    int v4 = 99;
    int i;
    v2 = 31;
    v0 = v0 - v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
