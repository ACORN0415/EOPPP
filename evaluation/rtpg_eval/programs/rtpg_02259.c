#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 49;
    int v1 = 67;
    int v2 = 28;
    int v3 = 97;
    int v4 = 83;
    int v5 = 11;
    int v6 = 31;
    int v7 = 81;
    int i;
    v0 = v0 + v3;
    v6 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v7 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
