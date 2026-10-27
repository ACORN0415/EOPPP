#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 22;
    int v1 = 70;
    int v2 = 2;
    int v3 = 56;
    int v4 = 74;
    int i;
    v2 = v2 + v1;
    v0 = v0 * 9;
    if (v4 > v2) { v4 = v2; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
