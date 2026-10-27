#include <stdlib.h>
int test_func(void) {
    int v0 = 64;
    int v1 = 3;
    int v2 = 97;
    int v3 = 21;
    int i;
    v2 = 55;
    v1 = v1 * 7;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    int *__p = &v3;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
