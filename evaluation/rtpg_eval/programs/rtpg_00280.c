#include <stdlib.h>
int test_func(void) {
    int v0 = 42;
    int v1 = 66;
    int v2 = 27;
    int v3 = 42;
    int v4 = 61;
    int v5 = 48;
    int v6 = 84;
    int i;
    v0 = v0 + v1;
    v5 = v5 - v6;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    v5 = v5 | v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
