#include <stdlib.h>
int test_func(void) {
    int v0 = 3;
    int v1 = 28;
    int v2 = 58;
    int v3 = 24;
    int v4 = 49;
    int v5 = 37;
    int v6 = 52;
    int v7 = 90;
    int i;
    v3 = 89;
    v0 = v0 + v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v7 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
