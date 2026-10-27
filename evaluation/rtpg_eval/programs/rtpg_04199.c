#include <stdlib.h>
int test_func(void) {
    int v0 = 69;
    int v1 = 17;
    int v2 = 52;
    int v3 = 17;
    int v4 = 73;
    int v5 = 43;
    int i;
    for (i = 0; i < 17; i++) {
        v2 = v2 + v4;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
