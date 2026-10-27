#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 41;
    int v1 = 72;
    int v2 = 76;
    int v3 = 42;
    int v4 = 43;
    int i;
    v4 = v4 - v3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v4 = __helper(v4);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
