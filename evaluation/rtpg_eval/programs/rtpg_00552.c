#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 40;
    int v1 = 66;
    int v2 = 15;
    int v3 = 82;
    int v4 = 35;
    int i;
    if (v0 > v3) { v0 = v3; }
    for (i = 0; i < 15; i++) {
        v1 = v1 + v4;
    }
    int *__p = &v2;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
