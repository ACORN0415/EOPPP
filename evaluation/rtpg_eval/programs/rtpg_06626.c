#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 52;
    int v1 = 83;
    int v2 = 67;
    int v3 = 32;
    int i;
    v2 = v2 - v0;
    v1 = __helper(v1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
