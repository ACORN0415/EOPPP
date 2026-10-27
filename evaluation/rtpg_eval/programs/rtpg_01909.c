#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 35;
    int v1 = 69;
    int v2 = 14;
    int v3 = 63;
    int i;
    v0 = 70;
    if (v0 > v0) { v0 = v0; }
    v3 = v3 - v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
