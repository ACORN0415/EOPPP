#include <stdlib.h>
int test_func(void) {
    int v0 = 0;
    int v1 = 39;
    int v2 = 55;
    int v3 = 5;
    int v4 = 69;
    int i;
    v1 = v1 - v2;
    if (v2 > v4) { v2 = v4; }
    int *__p = &v4;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
