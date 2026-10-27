#include <stdlib.h>
int test_func(void) {
    int v0 = 23;
    int v1 = 37;
    int v2 = 82;
    int v3 = 57;
    int v4 = 52;
    int v5 = 96;
    int v6 = 48;
    int i;
    v4 = 40;
    v2 = v2 % (v5 + 1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
