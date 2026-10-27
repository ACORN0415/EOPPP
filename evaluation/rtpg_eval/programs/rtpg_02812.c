#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_2812[10];
int test_func(void) {
    int v0 = 11;
    int v1 = 55;
    int v2 = 6;
    int v3 = 59;
    int i;
    for (i = 0; i < 10; i++) { __arr_2812[i] = v3 + i; }
    v2 = v2 & v1;
    v2 = __helper(v2);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
