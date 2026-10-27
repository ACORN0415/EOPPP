#include <stdlib.h>
int test_func(void) {
    int v0 = 19;
    int v1 = 91;
    int v2 = 100;
    int v3 = 97;
    int v4 = 74;
    int v5 = 59;
    int v6 = 66;
    int v7 = 89;
    int i;
    if (v3 > v5) { v3 = v5; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
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
