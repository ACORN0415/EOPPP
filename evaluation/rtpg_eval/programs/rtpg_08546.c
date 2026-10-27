#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8546[10];
int test_func(void) {
    int v0 = 41;
    int v1 = 12;
    int v2 = 99;
    int v3 = 1;
    int i;
    for (i = 0; i < 10; i++) { __arr_8546[i] = v1 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    v1 = __helper(v1);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
