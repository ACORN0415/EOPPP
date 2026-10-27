#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 70;
    int v1 = 25;
    int v2 = 63;
    int v3 = 20;
    int v4 = 33;
    int v5 = 81;
    int v6 = 21;
    int v7 = 46;
    int i;
    if (v7 > v0) { v7 = v0; }
    for (i = 0; i < 14; i++) {
        v4 = v4 + v1;
    }
    v1 = v1 - v4;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
