#include <stdlib.h>
int test_func(void) {
    int v0 = 49;
    int v1 = 92;
    int v2 = 70;
    int v3 = 80;
    int v4 = 13;
    int v5 = 4;
    int i;
    v5 = 99;
    v3 = v3 * 9;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
