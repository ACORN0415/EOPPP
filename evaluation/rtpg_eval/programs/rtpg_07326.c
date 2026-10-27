#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_7326[10];
int test_func(void) {
    int v0 = 93;
    int v1 = 71;
    int v2 = 57;
    int v3 = 65;
    int v4 = 93;
    int v5 = 56;
    int v6 = 60;
    int v7 = 29;
    int i;
    for (i = 0; i < 18; i++) {
        v2 = v2 + v2;
    }
    v7 = 58;
    for (i = 0; i < 10; i++) { __arr_7326[i] = v1 + i; }
    v5 = __helper(v5);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
