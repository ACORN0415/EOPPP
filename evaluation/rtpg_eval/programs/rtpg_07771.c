#include <stdlib.h>
int test_func(void) {
    int v0 = 58;
    int v1 = 49;
    int v2 = 69;
    int v3 = 71;
    int v4 = 17;
    int v5 = 87;
    int v6 = 10;
    int v7 = 18;
    int i;
    v4 = 43;
    v0 = v0 * 6;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
