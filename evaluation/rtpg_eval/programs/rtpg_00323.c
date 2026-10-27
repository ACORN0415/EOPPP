#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 44;
    int v1 = 9;
    int v2 = 99;
    int v3 = 39;
    int v4 = 68;
    int i;
    if (v4 > v4) { v4 = v4; }
    v0 = v0 * 7;
    v2 = v2 - v4;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    v1 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
