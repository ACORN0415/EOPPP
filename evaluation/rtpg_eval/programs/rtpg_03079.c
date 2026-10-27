#include <stdlib.h>
int test_func(void) {
    int v0 = 38;
    int v1 = 79;
    int v2 = 100;
    int v3 = 44;
    int v4 = 38;
    int v5 = 72;
    int i;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
