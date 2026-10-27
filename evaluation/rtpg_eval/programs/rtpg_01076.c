#include <stdlib.h>
int __arr_1076[10];
int test_func(void) {
    int v0 = 96;
    int v1 = 93;
    int v2 = 42;
    int v3 = 98;
    int i;
    if (v3 > v0) { v3 = v0; }
    v2 = v2 + v2;
    for (i = 0; i < 10; i++) { __arr_1076[i] = v3 + i; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
