#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 38;
    int v1 = 3;
    int v2 = 6;
    int v3 = 18;
    int v4 = 3;
    int v5 = 42;
    int v6 = 44;
    int v7 = 3;
    int i;
    v3 = v3 / (v0 + 1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
