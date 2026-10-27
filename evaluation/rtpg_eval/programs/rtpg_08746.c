#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 84;
    int v1 = 4;
    int v2 = 98;
    int v3 = 94;
    int i;
    v3 = v3 + v0;
    if (v3 > v2) { v3 = v2; }
    for (i = 0; i < 18; i++) {
        v2 = v2 + v1;
    }
    v3 = __helper(v3);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
