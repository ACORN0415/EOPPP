#include <stdlib.h>
int __arr_5804[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 62;
    int v2 = 0;
    int v3 = 10;
    int i;
    for (i = 0; i < 10; i++) { __arr_5804[i] = v1 + i; }
    v0 = 97;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v0;
    }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
