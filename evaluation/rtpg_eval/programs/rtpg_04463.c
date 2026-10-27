#include <stdlib.h>
int test_func(void) {
    int v0 = 40;
    int v1 = 26;
    int v2 = 10;
    int v3 = 94;
    int v4 = 48;
    int v5 = 61;
    int v6 = 42;
    int v7 = 93;
    int i;
    v5 = v5 - v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v7;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
