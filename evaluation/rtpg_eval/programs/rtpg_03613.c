#include <stdlib.h>
int test_func(void) {
    int v0 = 52;
    int v1 = 84;
    int v2 = 41;
    int v3 = 8;
    int i;
    for (i = 0; i < 15; i++) {
        v0 = v0 + v1;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
