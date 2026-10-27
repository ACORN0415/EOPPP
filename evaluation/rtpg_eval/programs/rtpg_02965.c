#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_2965[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 54;
    int v2 = 72;
    int v3 = 59;
    int v4 = 7;
    int v5 = 86;
    int v6 = 36;
    int i;
    for (i = 0; i < 10; i++) { __arr_2965[i] = v0 + i; }
    v3 = v3 * 4;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    int *__p = &v6;
    *__p = *__p + 1;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
