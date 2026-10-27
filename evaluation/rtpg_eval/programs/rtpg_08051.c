#include <stdlib.h>
int test_func(void) {
    int v0 = 76;
    int v1 = 95;
    int v2 = 61;
    int v3 = 3;
    int v4 = 77;
    int v5 = 81;
    int v6 = 23;
    int v7 = 53;
    int i;
    v2 = v2 - v4;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
