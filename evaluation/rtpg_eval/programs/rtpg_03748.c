#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 37;
    int v1 = 27;
    int v2 = 29;
    int v3 = 8;
    int i;
    v1 = v1 + v3;
    v3 = 97;
    for (i = 0; i < 15; i++) {
        v1 = v1 + v3;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    v2 = v2 / (v1 + 1);
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
