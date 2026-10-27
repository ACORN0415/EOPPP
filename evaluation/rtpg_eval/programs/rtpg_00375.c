#include <stdlib.h>
int __arr_375[10];
int test_func(void) {
    int v0 = 6;
    int v1 = 36;
    int v2 = 65;
    int v3 = 28;
    int v4 = 44;
    int v5 = 5;
    int v6 = 92;
    int i;
    if (v1 > v0) { v1 = v0; }
    for (i = 0; i < 10; i++) { __arr_375[i] = v1 + i; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
