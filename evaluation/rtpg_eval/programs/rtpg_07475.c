#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 95;
    int v1 = 16;
    int v2 = 78;
    int v3 = 22;
    int v4 = 51;
    int i;
    v4 = 78;
    for (i = 0; i < 19; i++) {
        v3 = v3 + v0;
    }
    v0 = v0 / (v3 + 1);
    v3 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
