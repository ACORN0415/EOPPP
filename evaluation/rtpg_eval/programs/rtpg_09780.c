#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_9780[10];
int test_func(void) {
    int v0 = 80;
    int v1 = 15;
    int v2 = 0;
    int v3 = 19;
    int v4 = 78;
    int v5 = 47;
    int v6 = 65;
    int v7 = 77;
    int i;
    for (i = 0; i < 10; i++) { __arr_9780[i] = v1 + i; }
    if (v4 > v2) { v4 = v2; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    v7 = __helper(v7);
    return v0;
}
int main(void) { return test_func(); }
