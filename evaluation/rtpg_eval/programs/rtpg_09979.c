#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 61;
    int v1 = 69;
    int v2 = 10;
    int v3 = 34;
    int v4 = 35;
    int v5 = 3;
    int v6 = 42;
    int v7 = 19;
    int i;
    v0 = v0 + v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
