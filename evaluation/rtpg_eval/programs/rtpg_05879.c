#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 22;
    int v1 = 15;
    int v2 = 59;
    int v3 = 21;
    int v4 = 15;
    int v5 = 35;
    int i;
    for (i = 0; i < 11; i++) {
        v1 = v1 + v5;
    }
    v1 = 85;
    v2 = v2 * 4;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
