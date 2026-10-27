#include <stdlib.h>
int test_func(void) {
    int v0 = 17;
    int v1 = 28;
    int v2 = 86;
    int v3 = 86;
    int i;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v1;
    }
    v3 = v3 + v0;
    if (v1 > v1) { v1 = v1; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    int *__p = &v1;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
