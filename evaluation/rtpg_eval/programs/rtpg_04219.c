#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 75;
    int v1 = 60;
    int v2 = 70;
    int v3 = 57;
    int v4 = 25;
    int v5 = 6;
    int i;
    v3 = v3 - v4;
    v1 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
