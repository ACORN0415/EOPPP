#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 70;
    int v1 = 63;
    int v2 = 58;
    int v3 = 90;
    int v4 = 51;
    int v5 = 92;
    int i;
    v2 = 9;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
