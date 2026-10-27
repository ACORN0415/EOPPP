#include <stdlib.h>
int test_func(void) {
    int v0 = 52;
    int v1 = 63;
    int v2 = 74;
    int v3 = 3;
    int v4 = 95;
    int v5 = 70;
    int i;
    for (i = 0; i < 15; i++) {
        v0 = v0 + v4;
    }
    v0 = v0 - v1;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
