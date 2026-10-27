#include <stdlib.h>
int __arr_4511[10];
int test_func(void) {
    int v0 = 37;
    int v1 = 14;
    int v2 = 46;
    int v3 = 70;
    int v4 = 94;
    int v5 = 19;
    int i;
    v5 = v5 + v0;
    for (i = 0; i < 10; i++) { __arr_4511[i] = v3 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
