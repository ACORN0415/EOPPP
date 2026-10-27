#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 45;
    int v1 = 68;
    int v2 = 83;
    int v3 = 89;
    int v4 = 41;
    int v5 = 79;
    int v6 = 80;
    int v7 = 24;
    int i;
    v1 = 52;
    v5 = v5 + v6;
    v3 = __helper(v3);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
