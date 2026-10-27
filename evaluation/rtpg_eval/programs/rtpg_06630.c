#include <stdlib.h>
int __arr_6630[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 25;
    int v1 = 56;
    int v2 = 96;
    int v3 = 70;
    int v4 = 89;
    int v5 = 48;
    int v6 = 8;
    int v7 = 46;
    int i;
    v6 = v6 + v0;
    v0 = v0 - v1;
    for (i = 0; i < 10; i++) { __arr_6630[i] = v6 + i; }
    v1 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v7;
    return v0;
}
int main(void) { return test_func(); }
