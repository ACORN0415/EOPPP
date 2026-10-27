#include <stdlib.h>
int test_func(void) {
    int v0 = 93;
    int v1 = 87;
    int v2 = 25;
    int v3 = 24;
    int v4 = 26;
    int v5 = 60;
    int v6 = 91;
    int v7 = 39;
    int i;
    v1 = v1 * 4;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    v6 = v6 % (v4 + 1);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
