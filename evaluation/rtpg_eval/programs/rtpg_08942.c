#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8942[10];
int test_func(void) {
    int v0 = 22;
    int v1 = 65;
    int v2 = 21;
    int v3 = 74;
    int v4 = 9;
    int i;
    for (i = 0; i < 10; i++) { __arr_8942[i] = v2 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
