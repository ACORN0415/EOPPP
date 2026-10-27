#include <stdlib.h>
int __arr_8541[10];
int test_func(void) {
    int v0 = 29;
    int v1 = 69;
    int v2 = 8;
    int v3 = 56;
    int v4 = 66;
    int v5 = 58;
    int v6 = 73;
    int i;
    for (i = 0; i < 10; i++) { __arr_8541[i] = v0 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
