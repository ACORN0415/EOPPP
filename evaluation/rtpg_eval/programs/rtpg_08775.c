#include <stdlib.h>
int __arr_8775[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 43;
    int v2 = 4;
    int v3 = 83;
    int v4 = 6;
    int v5 = 63;
    int i;
    if (v0 > v0) { v0 = v0; }
    for (i = 0; i < 10; i++) { __arr_8775[i] = v1 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
