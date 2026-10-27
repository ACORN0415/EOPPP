#include <stdlib.h>
int test_func(void) {
    int v0 = 45;
    int v1 = 63;
    int v2 = 99;
    int v3 = 90;
    int i;
    if (v1 > v3) { v1 = v3; }
    v1 = v1 + v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
