#include <stdlib.h>
int test_func(void) {
    int v0 = 99;
    int v1 = 52;
    int v2 = 47;
    int v3 = 41;
    int v4 = 50;
    int v5 = 42;
    int v6 = 43;
    int v7 = 52;
    int i;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
