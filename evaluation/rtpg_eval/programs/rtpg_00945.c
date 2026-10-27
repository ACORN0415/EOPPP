#include <stdlib.h>
int test_func(void) {
    int v0 = 78;
    int v1 = 88;
    int v2 = 9;
    int v3 = 31;
    int v4 = 56;
    int i;
    for (i = 0; i < 6; i++) {
        v3 = v3 + v0;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
