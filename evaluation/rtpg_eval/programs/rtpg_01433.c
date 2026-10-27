#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 15;
    int v1 = 61;
    int v2 = 90;
    int v3 = 40;
    int v4 = 37;
    int i;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
