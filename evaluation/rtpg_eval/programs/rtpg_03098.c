#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 12;
    int v2 = 58;
    int v3 = 54;
    int v4 = 100;
    int v5 = 34;
    int v6 = 48;
    int v7 = 76;
    int i;
    if (v1 > v4) { v1 = v4; }
    v0 = v0 + v4;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    v6 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
