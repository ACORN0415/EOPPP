#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 47;
    int v1 = 16;
    int v2 = 2;
    int v3 = 17;
    int v4 = 38;
    int v5 = 67;
    int v6 = 15;
    int i;
    v5 = 49;
    v4 = v4 + v2;
    if (v2 > v4) { v2 = v4; }
    v5 = __helper(v5);
    int *__p = &v1;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
