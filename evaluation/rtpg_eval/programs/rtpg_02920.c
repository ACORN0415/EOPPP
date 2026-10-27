#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 73;
    int v1 = 94;
    int v2 = 76;
    int v3 = 62;
    int v4 = 3;
    int v5 = 9;
    int v6 = 91;
    int i;
    v5 = v5 - v2;
    v5 = __helper(v5);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
