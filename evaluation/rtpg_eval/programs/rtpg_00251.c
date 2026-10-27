#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_251[10];
int test_func(void) {
    int v0 = 13;
    int v1 = 73;
    int v2 = 55;
    int v3 = 12;
    int i;
    for (i = 0; i < 10; i++) { __arr_251[i] = v2 + i; }
    v2 = 67;
    v2 = v2 + v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    v3 = __helper(v3);
    v1 = v1 & v0;
    return v0;
}
int main(void) { return test_func(); }
