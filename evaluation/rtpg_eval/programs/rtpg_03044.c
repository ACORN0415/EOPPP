#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 52;
    int v1 = 10;
    int v2 = 17;
    int i;
    v0 = 36;
    v0 = v0 + v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
