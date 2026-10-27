#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_1200[10];
int test_func(void) {
    int v0 = 7;
    int v1 = 28;
    int v2 = 3;
    int v3 = 54;
    int v4 = 98;
    int v5 = 16;
    int v6 = 50;
    int v7 = 81;
    int i;
    v2 = v2 - v6;
    for (i = 0; i < 10; i++) { __arr_1200[i] = v4 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }
