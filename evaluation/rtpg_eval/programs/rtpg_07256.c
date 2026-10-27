#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 22;
    int v1 = 43;
    int v2 = 57;
    int v3 = 81;
    int v4 = 51;
    int v5 = 78;
    int v6 = 27;
    int v7 = 92;
    int i;
    v5 = v5 + v5;
    v5 = __helper(v5);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
