#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 25;
    int v1 = 27;
    int v2 = 87;
    int v3 = 93;
    int v4 = 44;
    int v5 = 18;
    int v6 = 42;
    int i;
    if (v1 > v2) { v1 = v2; }
    v5 = v5 + v5;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
