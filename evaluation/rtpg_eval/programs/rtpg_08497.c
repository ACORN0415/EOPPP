#include <stdlib.h>
int test_func(void) {
    int v0 = 46;
    int v1 = 3;
    int v2 = 85;
    int v3 = 14;
    int v4 = 50;
    int v5 = 2;
    int v6 = 89;
    int v7 = 37;
    int i;
    v2 = 7;
    v1 = v1 - v0;
    v2 = v2 + v7;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
