#include <stdlib.h>
int test_func(void) {
    int v0 = 15;
    int v1 = 26;
    int v2 = 93;
    int v3 = 98;
    int v4 = 58;
    int i;
    if (v1 > v4) { v1 = v4; }
    for (i = 0; i < 13; i++) {
        v3 = v3 + v0;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    int *__p = &v3;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
