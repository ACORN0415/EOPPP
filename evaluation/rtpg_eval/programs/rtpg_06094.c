#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6094[10];
int test_func(void) {
    int v0 = 8;
    int v1 = 99;
    int v2 = 40;
    int v3 = 73;
    int v4 = 19;
    int i;
    for (i = 0; i < 10; i++) { __arr_6094[i] = v2 + i; }
    v2 = v2 * 8;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    v0 = __helper(v0);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
