#include <stdlib.h>
int test_func(void) {
    int v0 = 62;
    int v1 = 38;
    int v2 = 5;
    int v3 = 29;
    int v4 = 80;
    int v5 = 40;
    int i;
    v4 = v4 - v1;
    v3 = 72;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    int *__p = &v1;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
