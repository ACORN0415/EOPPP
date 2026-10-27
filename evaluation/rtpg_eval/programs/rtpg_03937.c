#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 19;
    int v1 = 8;
    int v2 = 63;
    int v3 = 4;
    int v4 = 55;
    int v5 = 3;
    int v6 = 1;
    int i;
    v4 = 64;
    v2 = v2 - v3;
    for (i = 0; i < 10; i++) {
        v0 = v0 + v2;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    v4 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
