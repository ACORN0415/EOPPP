#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 14;
    int v1 = 99;
    int v2 = 8;
    int v3 = 83;
    int v4 = 92;
    int v5 = 69;
    int v6 = 81;
    int v7 = 22;
    int i;
    v3 = v3 + v5;
    v5 = __helper(v5);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
