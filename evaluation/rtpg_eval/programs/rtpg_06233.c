#include <stdlib.h>
int test_func(void) {
    int v0 = 57;
    int v1 = 41;
    int v2 = 49;
    int v3 = 0;
    int i;
    v2 = v2 * 4;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
