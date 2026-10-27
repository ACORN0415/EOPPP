#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 58;
    int v1 = 55;
    int v2 = 96;
    int v3 = 78;
    int v4 = 80;
    int v5 = 61;
    int i;
    v5 = 25;
    v1 = v1 * 3;
    if (v3 > v3) { v3 = v3; }
    int *__p = &v1;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
