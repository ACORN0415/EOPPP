#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 82;
    int v1 = 89;
    int v2 = 58;
    int v3 = 86;
    int v4 = 10;
    int v5 = 86;
    int v6 = 67;
    int v7 = 94;
    int i;
    v0 = v0 + v6;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
