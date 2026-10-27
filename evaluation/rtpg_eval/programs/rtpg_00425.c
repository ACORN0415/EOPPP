#include <stdlib.h>
int __arr_425[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 19;
    int v1 = 66;
    int v2 = 95;
    int v3 = 54;
    int v4 = 92;
    int i;
    for (i = 0; i < 10; i++) { __arr_425[i] = v0 + i; }
    for (i = 0; i < 12; i++) {
        v3 = v3 + v3;
    }
    v4 = v4 - v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    v2 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
