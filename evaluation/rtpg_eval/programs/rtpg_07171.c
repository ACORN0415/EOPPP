#include <stdlib.h>
int test_func(void) {
    int v0 = 77;
    int v1 = 32;
    int v2 = 77;
    int v3 = 64;
    int v4 = 93;
    int v5 = 70;
    int v6 = 22;
    int i;
    v5 = v5 - v3;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
