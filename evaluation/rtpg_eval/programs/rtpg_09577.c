#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 66;
    int v1 = 73;
    int v2 = 85;
    int v3 = 86;
    int i;
    if (v0 > v3) { v0 = v3; }
    v0 = v0 * 7;
    v2 = v2 + v0;
    v1 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
