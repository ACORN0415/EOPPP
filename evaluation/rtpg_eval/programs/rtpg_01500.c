#include <stdlib.h>
int test_func(void) {
    int v0 = 73;
    int v1 = 28;
    int v2 = 44;
    int v3 = 70;
    int v4 = 50;
    int v5 = 72;
    int i;
    v5 = v5 - v2;
    v3 = 46;
    v2 = v2 * 2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
