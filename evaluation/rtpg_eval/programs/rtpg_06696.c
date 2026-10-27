#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6696[10];
int test_func(void) {
    int v0 = 100;
    int v1 = 78;
    int v2 = 11;
    int v3 = 82;
    int v4 = 0;
    int v5 = 34;
    int i;
    v3 = v3 * 2;
    for (i = 0; i < 10; i++) { __arr_6696[i] = v2 + i; }
    v1 = __helper(v1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
