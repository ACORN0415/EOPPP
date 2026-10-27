#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_9904[10];
int test_func(void) {
    int v0 = 44;
    int v1 = 19;
    int v2 = 85;
    int v3 = 27;
    int v4 = 67;
    int i;
    for (i = 0; i < 10; i++) { __arr_9904[i] = v0 + i; }
    v2 = 62;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v1;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
