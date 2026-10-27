#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 45;
    int v1 = 80;
    int v2 = 25;
    int v3 = 85;
    int v4 = 54;
    int v5 = 82;
    int v6 = 10;
    int v7 = 43;
    int i;
    v2 = v2 - v0;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    v7 = __helper(v7);
    return v0;
}
int main(void) { return test_func(); }
