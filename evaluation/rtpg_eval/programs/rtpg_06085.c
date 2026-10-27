#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6085[10];
int test_func(void) {
    int v0 = 70;
    int v1 = 6;
    int v2 = 49;
    int v3 = 93;
    int v4 = 96;
    int i;
    for (i = 0; i < 10; i++) { __arr_6085[i] = v3 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    v3 = __helper(v3);
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
