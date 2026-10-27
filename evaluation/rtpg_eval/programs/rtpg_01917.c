#include <stdlib.h>
int test_func(void) {
    int v0 = 42;
    int v1 = 43;
    int v2 = 28;
    int v3 = 99;
    int i;
    v3 = v3 - v0;
    if (v2 > v1) { v2 = v1; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
