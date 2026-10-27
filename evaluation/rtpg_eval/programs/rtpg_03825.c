#include <stdlib.h>
int __arr_3825[10];
int test_func(void) {
    int v0 = 34;
    int v1 = 84;
    int v2 = 0;
    int v3 = 33;
    int v4 = 0;
    int i;
    for (i = 0; i < 10; i++) { __arr_3825[i] = v3 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
