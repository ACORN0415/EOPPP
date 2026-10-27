#include <stdlib.h>
int __arr_6730[10];
int test_func(void) {
    int v0 = 51;
    int v1 = 70;
    int v2 = 100;
    int v3 = 4;
    int v4 = 91;
    int v5 = 66;
    int v6 = 97;
    int v7 = 5;
    int i;
    for (i = 0; i < 10; i++) { __arr_6730[i] = v2 + i; }
    v0 = v0 + v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v7;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
