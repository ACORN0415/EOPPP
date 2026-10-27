#include <stdlib.h>
int test_func(void) {
    int v0 = 76;
    int v1 = 42;
    int v2 = 50;
    int v3 = 86;
    int v4 = 59;
    int v5 = 30;
    int v6 = 59;
    int i;
    v4 = v4 - v3;
    v6 = v6 * 9;
    v2 = v2 + v6;
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
