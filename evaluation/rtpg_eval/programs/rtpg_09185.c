#include <stdlib.h>
int test_func(void) {
    int v0 = 77;
    int v1 = 4;
    int v2 = 7;
    int v3 = 16;
    int i;
    v3 = v3 * 10;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
