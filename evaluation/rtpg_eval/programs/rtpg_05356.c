#include <stdlib.h>
int test_func(void) {
    int v0 = 31;
    int v1 = 92;
    int v2 = 85;
    int v3 = 39;
    int v4 = 45;
    int v5 = 34;
    int v6 = 41;
    int v7 = 63;
    int i;
    v1 = v1 * 5;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
