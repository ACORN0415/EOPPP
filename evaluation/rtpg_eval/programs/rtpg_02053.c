#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_2053[10];
int test_func(void) {
    int v0 = 78;
    int v1 = 81;
    int v2 = 64;
    int v3 = 23;
    int v4 = 30;
    int i;
    for (i = 0; i < 15; i++) {
        v1 = v1 + v4;
    }
    for (i = 0; i < 10; i++) { __arr_2053[i] = v4 + i; }
    v0 = __helper(v0);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
