#include <stdlib.h>
int test_func(void) {
    int v0 = 85;
    int v1 = 32;
    int v2 = 2;
    int v3 = 1;
    int i;
    v1 = v1 * 4;
    v2 = v2 + v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
