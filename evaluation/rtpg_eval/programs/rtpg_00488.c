#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 9;
    int v1 = 64;
    int v2 = 43;
    int v3 = 64;
    int v4 = 51;
    int v5 = 100;
    int i;
    v3 = 78;
    v3 = __helper(v3);
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
