#include <stdlib.h>
int test_func(void) {
    int v0 = 67;
    int v1 = 68;
    int v2 = 38;
    int v3 = 57;
    int v4 = 71;
    int i;
    v2 = v2 + v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
