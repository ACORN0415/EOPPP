#include <stdlib.h>
int test_func(void) {
    int v0 = 50;
    int v1 = 44;
    int v2 = 78;
    int v3 = 14;
    int v4 = 100;
    int v5 = 49;
    int v6 = 58;
    int i;
    for (i = 0; i < 16; i++) {
        v3 = v3 + v5;
    }
    if (v4 > v1) { v4 = v1; }
    int *__p = &v6;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
