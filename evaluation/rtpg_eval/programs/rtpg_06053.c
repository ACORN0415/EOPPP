#include <stdlib.h>
int test_func(void) {
    int v0 = 40;
    int v1 = 10;
    int v2 = 67;
    int v3 = 81;
    int v4 = 59;
    int v5 = 35;
    int i;
    v2 = 26;
    if (v2 > v4) { v2 = v4; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
