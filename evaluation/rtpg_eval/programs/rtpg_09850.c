#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 34;
    int v1 = 59;
    int v2 = 12;
    int v3 = 76;
    int v4 = 44;
    int v5 = 78;
    int v6 = 42;
    int i;
    v0 = 21;
    v4 = v4 * 10;
    v4 = v4 + v5;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    v6 = __helper(v6);
    return v0;
}
int main(void) { return test_func(); }
