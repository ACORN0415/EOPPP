#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 17;
    int v1 = 2;
    int v2 = 51;
    int v3 = 35;
    int v4 = 86;
    int v5 = 74;
    int i;
    v2 = v2 + v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
