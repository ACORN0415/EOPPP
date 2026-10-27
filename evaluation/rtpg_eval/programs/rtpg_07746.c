#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 99;
    int v1 = 56;
    int v2 = 71;
    int v3 = 15;
    int v4 = 57;
    int i;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v4 = __helper(v4);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
