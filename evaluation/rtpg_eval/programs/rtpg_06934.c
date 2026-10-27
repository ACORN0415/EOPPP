#include <stdlib.h>
int test_func(void) {
    int v0 = 36;
    int v1 = 3;
    int v2 = 94;
    int v3 = 47;
    int v4 = 71;
    int v5 = 19;
    int v6 = 19;
    int v7 = 69;
    int i;
    v3 = v3 + v5;
    v0 = v0 - v7;
    int *__p = &v4;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
