#include <stdlib.h>
int test_func(void) {
    int v0 = 93;
    int v1 = 71;
    int v2 = 19;
    int v3 = 67;
    int v4 = 31;
    int v5 = 100;
    int v6 = 32;
    int v7 = 60;
    int i;
    v0 = v0 * 2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
