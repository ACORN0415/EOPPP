#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8417[10];
int test_func(void) {
    int v0 = 53;
    int v1 = 1;
    int v2 = 13;
    int i;
    for (i = 0; i < 10; i++) { __arr_8417[i] = v2 + i; }
    v1 = v1 | v2;
    v1 = __helper(v1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
