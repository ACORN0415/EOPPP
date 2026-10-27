#include <stdlib.h>
int test_func(void) {
    int v0 = 82;
    int v1 = 17;
    int v2 = 61;
    int v3 = 70;
    int v4 = 36;
    int v5 = 29;
    int i;
    v0 = v0 * 10;
    v4 = v4 + v2;
    if (v2 > v5) { v2 = v5; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
