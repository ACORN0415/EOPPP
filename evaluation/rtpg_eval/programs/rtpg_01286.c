#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_1286[10];
int test_func(void) {
    int v0 = 51;
    int v1 = 86;
    int v2 = 66;
    int i;
    v2 = 89;
    for (i = 0; i < 14; i++) {
        v1 = v1 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_1286[i] = v0 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    v0 = __helper(v0);
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
