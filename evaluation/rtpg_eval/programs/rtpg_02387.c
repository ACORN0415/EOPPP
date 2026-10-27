#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 88;
    int v1 = 11;
    int v2 = 69;
    int v3 = 42;
    int i;
    v1 = v1 * 7;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
