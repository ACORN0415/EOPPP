#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 20;
    int v1 = 95;
    int v2 = 54;
    int v3 = 91;
    int i;
    v3 = v3 - v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    int *__p = &v2;
    *__p = *__p + 1;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
