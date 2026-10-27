#include <stdlib.h>
int test_func(void) {
    int v0 = 11;
    int v1 = 47;
    int v2 = 46;
    int v3 = 4;
    int v4 = 67;
    int v5 = 92;
    int v6 = 45;
    int v7 = 44;
    int i;
    v5 = v5 + v5;
    v0 = v0 - v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v7 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
