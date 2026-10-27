#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 6;
    int v1 = 85;
    int v2 = 95;
    int v3 = 95;
    int i;
    v0 = 34;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    v1 = __helper(v1);
    v3 = v3 % (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
