#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 43;
    int v1 = 17;
    int v2 = 73;
    int v3 = 65;
    int v4 = 37;
    int i;
    if (v2 > v2) { v2 = v2; }
    v0 = v0 + v0;
    v3 = v3 | v0;
    v4 = __helper(v4);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
