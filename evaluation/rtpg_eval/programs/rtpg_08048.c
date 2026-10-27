#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8048[10];
int test_func(void) {
    int v0 = 2;
    int v1 = 63;
    int v2 = 21;
    int v3 = 100;
    int v4 = 81;
    int i;
    for (i = 0; i < 10; i++) { __arr_8048[i] = v0 + i; }
    v2 = __helper(v2);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
