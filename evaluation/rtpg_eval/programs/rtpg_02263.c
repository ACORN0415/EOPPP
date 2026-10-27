#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 68;
    int v1 = 36;
    int v2 = 66;
    int v3 = 21;
    int i;
    for (i = 0; i < 18; i++) {
        v2 = v2 + v3;
    }
    v0 = __helper(v0);
    int *__p = &v3;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
