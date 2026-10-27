#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 48;
    int v1 = 86;
    int v2 = 43;
    int v3 = 27;
    int v4 = 100;
    int i;
    for (i = 0; i < 8; i++) {
        v1 = v1 + v0;
    }
    int *__p = &v2;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
