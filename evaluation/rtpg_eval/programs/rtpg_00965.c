#include <stdlib.h>
int __arr_965[10];
int test_func(void) {
    int v0 = 28;
    int v1 = 14;
    int v2 = 94;
    int v3 = 95;
    int v4 = 9;
    int v5 = 86;
    int v6 = 43;
    int i;
    for (i = 0; i < 10; i++) { __arr_965[i] = v5 + i; }
    if (v6 > v0) { v6 = v0; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    v5 = v5 ^ v3;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
