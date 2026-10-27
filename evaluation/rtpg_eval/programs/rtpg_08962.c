#include <stdlib.h>
int test_func(void) {
    int v0 = 82;
    int v1 = 36;
    int v2 = 90;
    int v3 = 52;
    int i;
    v1 = v1 - v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
