#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 80;
    int v1 = 39;
    int v2 = 65;
    int v3 = 91;
    int v4 = 31;
    int i;
    v2 = v2 + v3;
    v0 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
