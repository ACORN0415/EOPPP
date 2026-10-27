#include <stdlib.h>
int test_func(void) {
    int v0 = 53;
    int v1 = 24;
    int v2 = 30;
    int v3 = 100;
    int v4 = 71;
    int v5 = 100;
    int v6 = 68;
    int i;
    v5 = 10;
    if (v2 > v0) { v2 = v0; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
