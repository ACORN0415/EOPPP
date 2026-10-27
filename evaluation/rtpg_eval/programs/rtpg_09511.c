#include <stdlib.h>
int test_func(void) {
    int v0 = 69;
    int v1 = 11;
    int v2 = 2;
    int v3 = 31;
    int v4 = 60;
    int v5 = 69;
    int v6 = 11;
    int v7 = 89;
    int i;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v7;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
