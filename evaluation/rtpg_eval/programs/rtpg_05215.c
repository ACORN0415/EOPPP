#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 87;
    int v1 = 96;
    int v2 = 47;
    int v3 = 67;
    int v4 = 0;
    int v5 = 53;
    int v6 = 8;
    int v7 = 22;
    int i;
    v2 = v2 * 10;
    v4 = __helper(v4);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
