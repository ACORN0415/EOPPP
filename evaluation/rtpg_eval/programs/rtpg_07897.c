#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_7897[10];
int test_func(void) {
    int v0 = 30;
    int v1 = 17;
    int v2 = 74;
    int v3 = 6;
    int i;
    v0 = v0 + v3;
    v1 = v1 - v3;
    for (i = 0; i < 10; i++) { __arr_7897[i] = v1 + i; }
    v1 = __helper(v1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
