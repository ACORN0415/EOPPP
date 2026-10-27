#include <stdlib.h>
int test_func(void) {
    int v0 = 16;
    int v1 = 94;
    int v2 = 13;
    int v3 = 47;
    int v4 = 93;
    int v5 = 27;
    int v6 = 4;
    int i;
    for (i = 0; i < 6; i++) {
        v5 = v5 + v1;
    }
    v6 = v6 * 5;
    v5 = v5 - v6;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
