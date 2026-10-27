#include <stdlib.h>
int test_func(void) {
    int v0 = 83;
    int v1 = 78;
    int v2 = 76;
    int v3 = 32;
    int v4 = 93;
    int v5 = 19;
    int v6 = 63;
    int i;
    v5 = v5 + v3;
    v3 = v3 * 2;
    v3 = v3 | v4;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
