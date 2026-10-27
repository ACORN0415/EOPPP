#include <stdlib.h>
int __arr_1680[10];
int test_func(void) {
    int v0 = 97;
    int v1 = 56;
    int v2 = 8;
    int v3 = 62;
    int v4 = 30;
    int v5 = 6;
    int i;
    for (i = 0; i < 10; i++) { __arr_1680[i] = v2 + i; }
    for (i = 0; i < 11; i++) {
        v4 = v4 + v5;
    }
    v1 = v1 - v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
