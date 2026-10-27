#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_5353[10];
int test_func(void) {
    int v0 = 62;
    int v1 = 62;
    int v2 = 89;
    int v3 = 46;
    int v4 = 18;
    int i;
    for (i = 0; i < 15; i++) {
        v4 = v4 + v3;
    }
    v1 = v1 * 2;
    for (i = 0; i < 10; i++) { __arr_5353[i] = v3 + i; }
    int *__p = &v1;
    *__p = *__p + 1;
    v4 = __helper(v4);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
