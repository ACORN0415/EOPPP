#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_1574[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 64;
    int v2 = 7;
    int v3 = 66;
    int v4 = 14;
    int v5 = 2;
    int v6 = 96;
    int i;
    for (i = 0; i < 10; i++) { __arr_1574[i] = v6 + i; }
    v0 = v0 * 8;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
