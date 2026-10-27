#include <stdlib.h>
int test_func(void) {
    int v0 = 51;
    int v1 = 37;
    int v2 = 31;
    int v3 = 52;
    int v4 = 91;
    int v5 = 16;
    int i;
    v1 = 69;
    for (i = 0; i < 6; i++) {
        v1 = v1 + v1;
    }
    int *__p = &v1;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
