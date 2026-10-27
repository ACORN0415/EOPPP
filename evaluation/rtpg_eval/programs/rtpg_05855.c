#include <stdlib.h>
int test_func(void) {
    int v0 = 30;
    int v1 = 64;
    int v2 = 4;
    int v3 = 97;
    int v4 = 86;
    int v5 = 49;
    int i;
    v3 = v3 - v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
