#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 92;
    int v1 = 53;
    int v2 = 48;
    int v3 = 80;
    int v4 = 93;
    int v5 = 64;
    int i;
    v3 = 58;
    if (v0 > v4) { v0 = v4; }
    v2 = __helper(v2);
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
