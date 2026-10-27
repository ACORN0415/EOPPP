#include <stdlib.h>
int test_func(void) {
    int v0 = 97;
    int v1 = 95;
    int v2 = 66;
    int v3 = 55;
    int v4 = 52;
    int v5 = 53;
    int v6 = 27;
    int i;
    v1 = v1 * 7;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
