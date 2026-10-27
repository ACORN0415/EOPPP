#include <stdlib.h>
int test_func(void) {
    int v0 = 59;
    int v1 = 83;
    int v2 = 80;
    int v3 = 48;
    int v4 = 90;
    int v5 = 92;
    int v6 = 90;
    int i;
    v6 = 66;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
