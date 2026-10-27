#include <stdlib.h>
int test_func(void) {
    int v0 = 90;
    int v1 = 67;
    int v2 = 72;
    int v3 = 87;
    int i;
    v1 = v1 * 6;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
