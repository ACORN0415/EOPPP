#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 45;
    int v1 = 89;
    int v2 = 82;
    int v3 = 49;
    int v4 = 36;
    int v5 = 38;
    int v6 = 27;
    int i;
    v6 = v6 * 6;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
