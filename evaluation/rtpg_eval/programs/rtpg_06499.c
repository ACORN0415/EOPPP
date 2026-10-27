#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 63;
    int v1 = 58;
    int v2 = 71;
    int v3 = 75;
    int i;
    for (i = 0; i < 18; i++) {
        v3 = v3 + v1;
    }
    v1 = v1 + v1;
    v0 = __helper(v0);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
