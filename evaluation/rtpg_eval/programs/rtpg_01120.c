#include <stdlib.h>
int test_func(void) {
    int v0 = 89;
    int v1 = 5;
    int v2 = 28;
    int v3 = 53;
    int v4 = 13;
    int v5 = 8;
    int v6 = 7;
    int i;
    v3 = v3 * 10;
    if (v6 > v3) { v6 = v3; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
