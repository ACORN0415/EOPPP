#include <stdlib.h>
int test_func(void) {
    int v0 = 3;
    int v1 = 76;
    int v2 = 5;
    int v3 = 15;
    int v4 = 22;
    int i;
    v0 = v0 + v3;
    v1 = v1 - v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
