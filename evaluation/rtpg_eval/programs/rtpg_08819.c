#include <stdlib.h>
int test_func(void) {
    int v0 = 25;
    int v1 = 17;
    int v2 = 53;
    int v3 = 40;
    int v4 = 19;
    int i;
    v0 = v0 + v3;
    v0 = v0 - v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
