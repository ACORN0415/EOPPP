#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_2858[10];
int test_func(void) {
    int v0 = 91;
    int v1 = 2;
    int v2 = 12;
    int v3 = 89;
    int v4 = 6;
    int v5 = 54;
    int v6 = 26;
    int i;
    v4 = 92;
    for (i = 0; i < 10; i++) { __arr_2858[i] = v1 + i; }
    v3 = v3 & v6;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
