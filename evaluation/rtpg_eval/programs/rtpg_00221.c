#include <stdlib.h>
int test_func(void) {
    int v0 = 26;
    int v1 = 88;
    int v2 = 38;
    int i;
    v0 = v0 + v1;
    if (v2 > v0) { v2 = v0; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
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
