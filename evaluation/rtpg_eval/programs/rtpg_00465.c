#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_465[10];
int test_func(void) {
    int v0 = 46;
    int v1 = 10;
    int v2 = 72;
    int v3 = 65;
    int i;
    for (i = 0; i < 10; i++) { __arr_465[i] = v2 + i; }
    for (i = 0; i < 7; i++) {
        v3 = v3 + v3;
    }
    v2 = v2 + v1;
    v2 = __helper(v2);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
