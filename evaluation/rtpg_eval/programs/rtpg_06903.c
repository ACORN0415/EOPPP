#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 10;
    int v1 = 83;
    int v2 = 23;
    int v3 = 77;
    int v4 = 25;
    int v5 = 34;
    int i;
    v0 = 60;
    v4 = __helper(v4);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
