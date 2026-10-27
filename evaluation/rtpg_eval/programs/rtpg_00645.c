#include <stdlib.h>
int test_func(void) {
    int v0 = 21;
    int v1 = 81;
    int v2 = 59;
    int v3 = 6;
    int i;
    v1 = v1 * 7;
    v3 = v3 + v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    int *__p = &v3;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
