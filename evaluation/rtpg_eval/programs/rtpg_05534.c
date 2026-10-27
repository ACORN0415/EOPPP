#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_5534[10];
int test_func(void) {
    int v0 = 9;
    int v1 = 10;
    int v2 = 50;
    int i;
    for (i = 0; i < 10; i++) { __arr_5534[i] = v1 + i; }
    v2 = v2 + v1;
    v1 = v1 * 9;
    v1 = __helper(v1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
