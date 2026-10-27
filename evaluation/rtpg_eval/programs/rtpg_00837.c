#include <stdlib.h>
int test_func(void) {
    int v0 = 94;
    int v1 = 84;
    int v2 = 42;
    int v3 = 5;
    int v4 = 29;
    int i;
    v3 = v3 + v2;
    v0 = 28;
    v1 = v1 & v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
