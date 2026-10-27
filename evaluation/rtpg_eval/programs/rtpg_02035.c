#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_2035[10];
int test_func(void) {
    int v0 = 64;
    int v1 = 96;
    int v2 = 84;
    int v3 = 73;
    int v4 = 91;
    int v5 = 46;
    int v6 = 43;
    int i;
    for (i = 0; i < 10; i++) { __arr_2035[i] = v4 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    v6 = __helper(v6);
    return v0;
}
int main(void) { return test_func(); }
