#include <stdlib.h>
int __arr_2140[10];
int test_func(void) {
    int v0 = 69;
    int v1 = 21;
    int v2 = 18;
    int i;
    for (i = 0; i < 10; i++) { __arr_2140[i] = v2 + i; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
