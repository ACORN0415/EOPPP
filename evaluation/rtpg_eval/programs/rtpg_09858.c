#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 90;
    int v1 = 51;
    int v2 = 67;
    int v3 = 13;
    int v4 = 90;
    int v5 = 69;
    int v6 = 93;
    int i;
    for (i = 0; i < 20; i++) {
        v2 = v2 + v1;
    }
    v2 = 42;
    v1 = __helper(v1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
