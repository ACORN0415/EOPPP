#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 36;
    int v1 = 98;
    int v2 = 37;
    int v3 = 73;
    int v4 = 38;
    int v5 = 41;
    int v6 = 79;
    int i;
    v0 = v0 + v1;
    v4 = v4 * 4;
    for (i = 0; i < 8; i++) {
        v3 = v3 + v4;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    v6 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
