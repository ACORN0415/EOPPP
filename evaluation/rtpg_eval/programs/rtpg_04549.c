#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 13;
    int v1 = 38;
    int v2 = 5;
    int v3 = 57;
    int v4 = 18;
    int v5 = 24;
    int i;
    v0 = v0 + v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }
