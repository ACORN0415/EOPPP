#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 37;
    int v1 = 40;
    int v2 = 52;
    int v3 = 1;
    int v4 = 75;
    int v5 = 49;
    int i;
    v2 = 92;
    v3 = __helper(v3);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
