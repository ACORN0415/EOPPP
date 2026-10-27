#include <stdlib.h>
int test_func(void) {
    int v0 = 45;
    int v1 = 8;
    int v2 = 76;
    int i;
    for (i = 0; i < 11; i++) {
        v1 = v1 + v2;
    }
    v2 = v2 + v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
