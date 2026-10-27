#include <stdlib.h>
int test_func(void) {
    int v0 = 70;
    int v1 = 75;
    int v2 = 87;
    int v3 = 10;
    int i;
    if (v3 > v2) { v3 = v2; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
