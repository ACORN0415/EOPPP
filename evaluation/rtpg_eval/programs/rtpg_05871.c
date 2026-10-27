#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_5871[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 87;
    int v2 = 85;
    int v3 = 31;
    int i;
    for (i = 0; i < 10; i++) { __arr_5871[i] = v3 + i; }
    v2 = v2 - v3;
    v3 = 43;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
