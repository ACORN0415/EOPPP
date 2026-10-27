#include <stdlib.h>
int test_func(void) {
    int v0 = 35;
    int v1 = 45;
    int v2 = 45;
    int v3 = 43;
    int i;
    v0 = 32;
    v1 = v1 * 7;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    int *__p = &v1;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
