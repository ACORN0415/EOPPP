#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 14;
    int v1 = 10;
    int v2 = 74;
    int v3 = 12;
    int v4 = 2;
    int v5 = 15;
    int v6 = 58;
    int v7 = 96;
    int i;
    v7 = v7 + v7;
    v1 = __helper(v1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
