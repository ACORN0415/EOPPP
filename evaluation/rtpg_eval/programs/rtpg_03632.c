#include <stdlib.h>
int __arr_3632[10];
int test_func(void) {
    int v0 = 69;
    int v1 = 81;
    int v2 = 99;
    int v3 = 76;
    int v4 = 0;
    int v5 = 78;
    int i;
    for (i = 0; i < 10; i++) { __arr_3632[i] = v5 + i; }
    if (v5 > v2) { v5 = v2; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
