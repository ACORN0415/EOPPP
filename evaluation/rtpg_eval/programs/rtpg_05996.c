#include <stdlib.h>
int test_func(void) {
    int v0 = 5;
    int v1 = 36;
    int v2 = 80;
    int v3 = 100;
    int v4 = 91;
    int i;
    v0 = v0 - v4;
    v2 = v2 * 8;
    v4 = v4 + v2;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
