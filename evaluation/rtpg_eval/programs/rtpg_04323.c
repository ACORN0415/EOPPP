#include <stdlib.h>
int test_func(void) {
    int v0 = 4;
    int v1 = 25;
    int v2 = 1;
    int v3 = 83;
    int v4 = 61;
    int v5 = 30;
    int v6 = 39;
    int i;
    v5 = v5 * 10;
    v3 = v3 + v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
