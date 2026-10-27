#include <stdlib.h>
int __arr_2580[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 76;
    int v2 = 63;
    int i;
    for (i = 0; i < 10; i++) { __arr_2580[i] = v2 + i; }
    v2 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
