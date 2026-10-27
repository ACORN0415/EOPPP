#include <stdlib.h>
int test_func(void) {
    int v0 = 21;
    int v1 = 64;
    int v2 = 66;
    int v3 = 70;
    int v4 = 43;
    int v5 = 76;
    int i;
    v0 = v0 + v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    v5 = v5 | v3;
    return v0;
}
int main(void) { return test_func(); }
