#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 2;
    int v1 = 48;
    int v2 = 33;
    int v3 = 1;
    int v4 = 96;
    int i;
    for (i = 0; i < 15; i++) {
        v4 = v4 + v1;
    }
    v1 = v1 + v0;
    v2 = v2 | v3;
    v3 = __helper(v3);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
