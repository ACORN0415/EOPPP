#include <stdlib.h>
int __arr_2349[10];
int test_func(void) {
    int v0 = 62;
    int v1 = 51;
    int v2 = 91;
    int i;
    v0 = v0 - v2;
    for (i = 0; i < 10; i++) { __arr_2349[i] = v1 + i; }
    v1 = 5;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
