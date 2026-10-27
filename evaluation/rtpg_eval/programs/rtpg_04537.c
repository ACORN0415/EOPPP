#include <stdlib.h>
int test_func(void) {
    int v0 = 39;
    int v1 = 87;
    int v2 = 5;
    int v3 = 22;
    int v4 = 1;
    int v5 = 57;
    int i;
    if (v1 > v1) { v1 = v1; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
