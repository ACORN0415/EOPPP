#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6941[10];
int test_func(void) {
    int v0 = 40;
    int v1 = 53;
    int v2 = 68;
    int v3 = 51;
    int v4 = 12;
    int v5 = 57;
    int v6 = 43;
    int i;
    for (i = 0; i < 10; i++) { __arr_6941[i] = v1 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }
