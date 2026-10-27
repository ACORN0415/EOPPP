#include <stdlib.h>
int __arr_2534[10];
int test_func(void) {
    int v0 = 82;
    int v1 = 59;
    int v2 = 89;
    int i;
    for (i = 0; i < 10; i++) { __arr_2534[i] = v0 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
