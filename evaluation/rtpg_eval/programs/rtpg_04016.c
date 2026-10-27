#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 0;
    int v1 = 85;
    int v2 = 9;
    int v3 = 7;
    int v4 = 92;
    int v5 = 48;
    int v6 = 34;
    int v7 = 13;
    int i;
    v1 = v1 * 3;
    if (v0 > v4) { v0 = v4; }
    v4 = v4 - v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    v0 = __helper(v0);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
