#include <stdlib.h>
int __arr_7781[10];
int test_func(void) {
    int v0 = 48;
    int v1 = 82;
    int v2 = 85;
    int i;
    for (i = 0; i < 10; i++) {
        v0 = v0 + v2;
    }
    for (i = 0; i < 10; i++) { __arr_7781[i] = v1 + i; }
    v1 = v1 * 6;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
