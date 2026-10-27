#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 35;
    int v1 = 62;
    int v2 = 70;
    int v3 = 36;
    int v4 = 59;
    int i;
    v1 = v1 * 3;
    v2 = __helper(v2);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
