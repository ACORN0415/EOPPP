#include <stdlib.h>
int test_func(void) {
    int v0 = 82;
    int v1 = 28;
    int v2 = 26;
    int v3 = 89;
    int v4 = 57;
    int v5 = 1;
    int v6 = 83;
    int v7 = 47;
    int i;
    for (i = 0; i < 8; i++) {
        v4 = v4 + v7;
    }
    v4 = 98;
    if (v4 > v3) { v4 = v3; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    v6 = v6 % (v7 + 1);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
