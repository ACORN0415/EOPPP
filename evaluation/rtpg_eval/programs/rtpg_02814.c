#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 57;
    int v1 = 61;
    int v2 = 70;
    int v3 = 5;
    int v4 = 65;
    int v5 = 95;
    int i;
    v5 = v5 + v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
