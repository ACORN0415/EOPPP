#include <stdlib.h>
int test_func(void) {
    int v0 = 100;
    int v1 = 26;
    int v2 = 72;
    int i;
    v0 = 55;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    int *__p = &v0;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
