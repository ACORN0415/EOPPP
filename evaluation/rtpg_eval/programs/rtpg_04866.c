#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 49;
    int v1 = 85;
    int v2 = 7;
    int v3 = 20;
    int v4 = 19;
    int v5 = 40;
    int v6 = 14;
    int v7 = 17;
    int i;
    for (i = 0; i < 18; i++) {
        v5 = v5 + v2;
    }
    v3 = __helper(v3);
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v7;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
