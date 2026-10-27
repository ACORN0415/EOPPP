#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6549[10];
int test_func(void) {
    int v0 = 29;
    int v1 = 45;
    int v2 = 20;
    int i;
    v1 = v1 - v0;
    for (i = 0; i < 10; i++) { __arr_6549[i] = v2 + i; }
    if (v0 > v2) { v0 = v2; }
    int *__p = &v2;
    *__p = *__p + 1;
    v2 = __helper(v2);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
