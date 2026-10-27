#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 91;
    int v1 = 91;
    int v2 = 38;
    int v3 = 60;
    int v4 = 99;
    int v5 = 87;
    int v6 = 36;
    int i;
    for (i = 0; i < 7; i++) {
        v2 = v2 + v4;
    }
    v1 = __helper(v1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
