#include <stdlib.h>
int test_func(void) {
    int v0 = 11;
    int v1 = 95;
    int v2 = 55;
    int v3 = 0;
    int v4 = 89;
    int v5 = 82;
    int v6 = 92;
    int i;
    v0 = v0 + v0;
    for (i = 0; i < 6; i++) {
        v1 = v1 + v4;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    v1 = v1 & v3;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
