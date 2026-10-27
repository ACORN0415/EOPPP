#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 4;
    int v1 = 14;
    int v2 = 71;
    int i;
    if (v2 > v2) { v2 = v2; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    v1 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
