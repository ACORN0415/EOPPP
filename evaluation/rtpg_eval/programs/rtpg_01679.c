#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_1679[10];
int test_func(void) {
    int v0 = 46;
    int v1 = 15;
    int v2 = 89;
    int v3 = 73;
    int v4 = 86;
    int v5 = 79;
    int v6 = 69;
    int i;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v6;
    }
    for (i = 0; i < 10; i++) { __arr_1679[i] = v5 + i; }
    v4 = __helper(v4);
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
