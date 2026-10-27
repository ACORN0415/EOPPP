#include <stdlib.h>
int test_func(void) {
    int v0 = 75;
    int v1 = 42;
    int v2 = 22;
    int v3 = 91;
    int v4 = 68;
    int v5 = 29;
    int v6 = 99;
    int v7 = 24;
    int i;
    v5 = 80;
    for (i = 0; i < 13; i++) {
        v5 = v5 + v6;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v7;
    free(__pm);
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v7 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
