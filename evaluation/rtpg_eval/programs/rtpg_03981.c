#include <stdlib.h>
int __arr_3981[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 19;
    int v1 = 7;
    int v2 = 67;
    int v3 = 18;
    int v4 = 5;
    int v5 = 39;
    int v6 = 44;
    int i;
    v0 = 82;
    v2 = v2 * 2;
    for (i = 0; i < 10; i++) { __arr_3981[i] = v3 + i; }
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    v5 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
