#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 6;
    int v1 = 23;
    int v2 = 32;
    int v3 = 67;
    int v4 = 66;
    int v5 = 10;
    int v6 = 11;
    int i;
    v5 = v5 * 8;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
