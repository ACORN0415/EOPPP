#include <stdlib.h>
int test_func(void) {
    int v0 = 51;
    int v1 = 83;
    int v2 = 97;
    int v3 = 61;
    int v4 = 68;
    int v5 = 45;
    int v6 = 71;
    int v7 = 19;
    int i;
    v5 = v5 * 5;
    if (v7 > v6) { v7 = v6; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
