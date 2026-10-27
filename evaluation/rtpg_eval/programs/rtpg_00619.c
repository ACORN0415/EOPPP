#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_619[10];
int test_func(void) {
    int v0 = 82;
    int v1 = 66;
    int v2 = 85;
    int v3 = 20;
    int v4 = 99;
    int v5 = 94;
    int i;
    for (i = 0; i < 10; i++) { __arr_619[i] = v1 + i; }
    v2 = v2 * 5;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
