#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 87;
    int v1 = 13;
    int v2 = 29;
    int v3 = 25;
    int v4 = 79;
    int v5 = 73;
    int v6 = 38;
    int v7 = 59;
    int i;
    if (v3 > v0) { v3 = v0; }
    v7 = v7 - v6;
    v1 = v1 + v1;
    v7 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v7;
    return v0;
}
int main(void) { return test_func(); }
