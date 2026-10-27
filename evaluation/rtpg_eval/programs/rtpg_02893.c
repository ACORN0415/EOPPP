#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_2893[10];
int test_func(void) {
    int v0 = 85;
    int v1 = 94;
    int v2 = 83;
    int v3 = 61;
    int v4 = 77;
    int v5 = 63;
    int v6 = 59;
    int i;
    for (i = 0; i < 10; i++) { __arr_2893[i] = v4 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }
