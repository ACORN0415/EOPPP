#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 66;
    int v1 = 20;
    int v2 = 9;
    int v3 = 31;
    int v4 = 81;
    int i;
    if (v2 > v0) { v2 = v0; }
    v0 = __helper(v0);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
