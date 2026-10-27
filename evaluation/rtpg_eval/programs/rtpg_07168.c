#include <stdlib.h>
int test_func(void) {
    int v0 = 44;
    int v1 = 57;
    int v2 = 80;
    int v3 = 32;
    int v4 = 86;
    int v5 = 32;
    int v6 = 15;
    int i;
    v4 = v4 - v2;
    v3 = 96;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
