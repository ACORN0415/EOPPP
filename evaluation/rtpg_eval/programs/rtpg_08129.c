#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8129[10];
int test_func(void) {
    int v0 = 62;
    int v1 = 64;
    int v2 = 94;
    int v3 = 81;
    int v4 = 70;
    int v5 = 81;
    int i;
    for (i = 0; i < 10; i++) { __arr_8129[i] = v2 + i; }
    v3 = v3 - v5;
    v5 = __helper(v5);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
