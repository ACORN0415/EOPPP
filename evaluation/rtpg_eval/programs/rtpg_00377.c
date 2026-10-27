#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 87;
    int v1 = 7;
    int v2 = 98;
    int v3 = 87;
    int v4 = 51;
    int v5 = 30;
    int v6 = 43;
    int v7 = 3;
    int i;
    v7 = v7 * 10;
    v5 = 86;
    v1 = __helper(v1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
