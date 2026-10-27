#include <stdlib.h>
int __arr_2684[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 18;
    int v1 = 44;
    int v2 = 25;
    int v3 = 18;
    int v4 = 44;
    int v5 = 51;
    int i;
    for (i = 0; i < 10; i++) { __arr_2684[i] = v3 + i; }
    v3 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
