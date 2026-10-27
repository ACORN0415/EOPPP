#include <stdlib.h>
int test_func(void) {
    int v0 = 12;
    int v1 = 62;
    int v2 = 23;
    int v3 = 36;
    int v4 = 80;
    int v5 = 42;
    int i;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v1;
    }
    v3 = v3 + v0;
    if (v2 > v5) { v2 = v5; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    v5 = v5 & v4;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
