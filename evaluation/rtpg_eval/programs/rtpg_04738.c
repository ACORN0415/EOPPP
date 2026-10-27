#include <stdlib.h>
int __arr_4738[10];
int test_func(void) {
    int v0 = 12;
    int v1 = 78;
    int v2 = 82;
    int v3 = 4;
    int v4 = 47;
    int v5 = 45;
    int v6 = 16;
    int v7 = 99;
    int i;
    if (v7 > v4) { v7 = v4; }
    for (i = 0; i < 10; i++) { __arr_4738[i] = v2 + i; }
    for (i = 0; i < 15; i++) {
        v4 = v4 + v4;
    }
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v7;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
