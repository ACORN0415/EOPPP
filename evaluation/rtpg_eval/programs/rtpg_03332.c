#include <stdlib.h>
int test_func(void) {
    int v0 = 29;
    int v1 = 34;
    int v2 = 1;
    int v3 = 15;
    int v4 = 75;
    int v5 = 71;
    int i;
    v5 = v5 - v3;
    v4 = v4 + v4;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
