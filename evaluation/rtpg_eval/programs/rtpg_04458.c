#include <stdlib.h>
int test_func(void) {
    int v0 = 40;
    int v1 = 10;
    int v2 = 18;
    int v3 = 97;
    int i;
    for (i = 0; i < 13; i++) {
        v2 = v2 + v2;
    }
    v3 = v3 + v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
