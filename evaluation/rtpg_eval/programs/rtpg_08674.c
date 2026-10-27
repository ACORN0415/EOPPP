#include <stdlib.h>
int test_func(void) {
    int v0 = 98;
    int v1 = 3;
    int v2 = 74;
    int i;
    if (v0 > v0) { v0 = v0; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
