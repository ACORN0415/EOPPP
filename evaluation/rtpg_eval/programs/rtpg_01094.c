#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 76;
    int v1 = 97;
    int v2 = 63;
    int v3 = 32;
    int v4 = 12;
    int v5 = 30;
    int i;
    v0 = v0 * 7;
    for (i = 0; i < 8; i++) {
        v3 = v3 + v1;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
