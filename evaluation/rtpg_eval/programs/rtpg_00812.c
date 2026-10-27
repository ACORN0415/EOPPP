#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 68;
    int v1 = 2;
    int v2 = 3;
    int v3 = 22;
    int v4 = 27;
    int i;
    v0 = 66;
    if (v1 > v3) { v1 = v3; }
    v2 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
