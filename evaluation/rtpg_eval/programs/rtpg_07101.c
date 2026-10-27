#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 63;
    int v1 = 90;
    int v2 = 84;
    int v3 = 49;
    int v4 = 91;
    int i;
    v4 = 60;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
