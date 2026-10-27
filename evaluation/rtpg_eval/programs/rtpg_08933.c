#include <stdlib.h>
int test_func(void) {
    int v0 = 61;
    int v1 = 39;
    int v2 = 26;
    int v3 = 76;
    int v4 = 75;
    int v5 = 100;
    int v6 = 69;
    int v7 = 85;
    int i;
    v5 = v5 + v2;
    v7 = 41;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    switch (v7) {
        case 0: v7 = 1; break;
        case 1: v7 = 2; break;
        default: v7 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
