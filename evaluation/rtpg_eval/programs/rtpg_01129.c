#include <stdlib.h>
int test_func(void) {
    int v0 = 51;
    int v1 = 44;
    int v2 = 3;
    int i;
    for (i = 0; i < 15; i++) {
        v1 = v1 + v2;
    }
    v0 = v0 - v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
