#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 63;
    int v1 = 72;
    int v2 = 28;
    int v3 = 53;
    int v4 = 84;
    int v5 = 24;
    int v6 = 57;
    int v7 = 10;
    int i;
    v3 = 92;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }
