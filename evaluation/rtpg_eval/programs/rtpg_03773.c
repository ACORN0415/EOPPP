#include <stdlib.h>
int test_func(void) {
    int v0 = 59;
    int v1 = 46;
    int v2 = 97;
    int v3 = 70;
    int i;
    v3 = v3 + v1;
    if (v1 > v0) { v1 = v0; }
    for (i = 0; i < 8; i++) {
        v3 = v3 + v2;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
