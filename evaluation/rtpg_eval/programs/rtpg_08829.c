#include <stdlib.h>
int __arr_8829[10];
int test_func(void) {
    int v0 = 75;
    int v1 = 60;
    int v2 = 77;
    int v3 = 1;
    int i;
    v0 = 21;
    for (i = 0; i < 10; i++) { __arr_8829[i] = v1 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
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
