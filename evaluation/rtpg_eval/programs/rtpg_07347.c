#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 76;
    int v1 = 72;
    int v2 = 57;
    int v3 = 19;
    int v4 = 11;
    int v5 = 16;
    int v6 = 12;
    int v7 = 20;
    int i;
    if (v0 > v2) { v0 = v2; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    int *__p = &v1;
    *__p = *__p + 1;
    v6 = __helper(v6);
    return v0;
}
int main(void) { return test_func(); }
