#include <stdlib.h>
int test_func(void) {
    int v0 = 95;
    int v1 = 3;
    int v2 = 65;
    int v3 = 56;
    int i;
    v3 = v3 + v0;
    v2 = v2 * 7;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
