#include <stdlib.h>
int test_func(void) {
    int v0 = 88;
    int v1 = 19;
    int v2 = 18;
    int v3 = 67;
    int v4 = 13;
    int i;
    int *__p = &v2;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
