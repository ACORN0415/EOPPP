#include <stdlib.h>
int __arr_5960[10];
int test_func(void) {
    int v0 = 6;
    int v1 = 7;
    int v2 = 12;
    int v3 = 35;
    int v4 = 89;
    int v5 = 30;
    int v6 = 91;
    int i;
    v1 = 94;
    for (i = 0; i < 10; i++) { __arr_5960[i] = v4 + i; }
    for (i = 0; i < 12; i++) {
        v4 = v4 + v2;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    v0 = v0 / (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
