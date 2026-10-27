#include <stdlib.h>
int test_func(void) {
    int v0 = 67;
    int v1 = 16;
    int v2 = 90;
    int v3 = 89;
    int i;
    for (i = 0; i < 19; i++) {
        v2 = v2 + v0;
    }
    v0 = v0 + v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
