#include <stdlib.h>
int test_func(void) {
    int v0 = 43;
    int v1 = 48;
    int v2 = 97;
    int i;
    v0 = 35;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
