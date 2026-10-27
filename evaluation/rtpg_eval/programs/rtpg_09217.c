#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 75;
    int v1 = 40;
    int v2 = 9;
    int v3 = 34;
    int i;
    v3 = v3 - v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    v2 = __helper(v2);
    v2 = v2 % (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
