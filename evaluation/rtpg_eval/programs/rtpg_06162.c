#include <stdlib.h>
int __arr_6162[10];
int test_func(void) {
    int v0 = 52;
    int v1 = 94;
    int v2 = 45;
    int v3 = 61;
    int v4 = 41;
    int v5 = 18;
    int i;
    for (i = 0; i < 10; i++) { __arr_6162[i] = v3 + i; }
    v4 = v4 % (v3 + 1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
