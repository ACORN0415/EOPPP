#include <stdlib.h>
int test_func(void) {
    int v0 = 28;
    int v1 = 11;
    int v2 = 53;
    int v3 = 100;
    int v4 = 36;
    int v5 = 54;
    int i;
    v2 = v2 + v4;
    v2 = v2 - v5;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
