#include <stdlib.h>
int test_func(void) {
    int v0 = 62;
    int v1 = 65;
    int v2 = 78;
    int i;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v1;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    v0 = v0 / (v1 + 1);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
