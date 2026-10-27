#include <stdlib.h>
int __arr_5890[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 4;
    int v1 = 20;
    int v2 = 4;
    int v3 = 36;
    int i;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_5890[i] = v3 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    v3 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
