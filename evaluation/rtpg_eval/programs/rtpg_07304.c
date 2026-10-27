#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_7304[10];
int test_func(void) {
    int v0 = 19;
    int v1 = 16;
    int v2 = 14;
    int v3 = 46;
    int v4 = 97;
    int v5 = 12;
    int v6 = 20;
    int v7 = 66;
    int i;
    for (i = 0; i < 10; i++) { __arr_7304[i] = v6 + i; }
    if (v3 > v0) { v3 = v0; }
    v0 = v0 * 9;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    v6 = v6 | v7;
    v7 = __helper(v7);
    return v0;
}
int main(void) { return test_func(); }
