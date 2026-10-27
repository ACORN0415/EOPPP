#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_3627[10];
int test_func(void) {
    int v0 = 76;
    int v1 = 16;
    int v2 = 63;
    int v3 = 85;
    int v4 = 52;
    int i;
    v3 = v3 - v0;
    for (i = 0; i < 10; i++) { __arr_3627[i] = v2 + i; }
    v0 = __helper(v0);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
