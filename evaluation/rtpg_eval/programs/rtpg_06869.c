#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6869[10];
int test_func(void) {
    int v0 = 98;
    int v1 = 95;
    int v2 = 45;
    int v3 = 11;
    int v4 = 93;
    int v5 = 18;
    int v6 = 89;
    int i;
    for (i = 0; i < 10; i++) { __arr_6869[i] = v5 + i; }
    v6 = v6 + v0;
    v0 = v0 - v4;
    v5 = __helper(v5);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    v0 = v0 ^ v1;
    return v0;
}
int main(void) { return test_func(); }
