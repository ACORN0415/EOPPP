#include <stdlib.h>
int test_func(void) {
    int v0 = 81;
    int v1 = 84;
    int v2 = 19;
    int v3 = 52;
    int v4 = 68;
    int v5 = 100;
    int i;
    v1 = v1 * 9;
    v4 = v4 - v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
