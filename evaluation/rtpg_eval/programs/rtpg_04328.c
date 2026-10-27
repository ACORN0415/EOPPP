#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_4328[10];
int test_func(void) {
    int v0 = 89;
    int v1 = 35;
    int v2 = 45;
    int v3 = 99;
    int v4 = 62;
    int v5 = 22;
    int i;
    for (i = 0; i < 15; i++) {
        v5 = v5 + v5;
    }
    for (i = 0; i < 10; i++) { __arr_4328[i] = v5 + i; }
    v5 = 40;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    v2 = __helper(v2);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
