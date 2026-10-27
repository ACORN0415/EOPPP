#include <stdlib.h>
int test_func(void) {
    int v0 = 100;
    int v1 = 18;
    int v2 = 98;
    int v3 = 65;
    int v4 = 18;
    int v5 = 12;
    int v6 = 81;
    int i;
    v2 = 50;
    v3 = v3 * 5;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
