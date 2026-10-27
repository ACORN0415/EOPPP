#include <stdlib.h>
int __arr_5694[10];
int test_func(void) {
    int v0 = 79;
    int v1 = 43;
    int v2 = 10;
    int v3 = 30;
    int v4 = 39;
    int v5 = 89;
    int v6 = 33;
    int i;
    for (i = 0; i < 10; i++) { __arr_5694[i] = v2 + i; }
    if (v4 > v0) { v4 = v0; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
