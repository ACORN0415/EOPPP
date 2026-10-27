#include <stdlib.h>
int test_func(void) {
    int v0 = 41;
    int v1 = 24;
    int v2 = 88;
    int v3 = 26;
    int v4 = 23;
    int v5 = 25;
    int v6 = 85;
    int v7 = 90;
    int i;
    for (i = 0; i < 20; i++) {
        v3 = v3 + v4;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
