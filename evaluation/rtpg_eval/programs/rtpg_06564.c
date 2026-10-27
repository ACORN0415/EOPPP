#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6564[10];
int test_func(void) {
    int v0 = 49;
    int v1 = 30;
    int v2 = 96;
    int v3 = 67;
    int v4 = 45;
    int v5 = 88;
    int v6 = 21;
    int v7 = 59;
    int i;
    for (i = 0; i < 10; i++) { __arr_6564[i] = v6 + i; }
    v6 = v6 * 4;
    v4 = __helper(v4);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
