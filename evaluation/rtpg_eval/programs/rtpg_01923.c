#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 4;
    int v1 = 55;
    int v2 = 93;
    int i;
    v0 = v0 - v2;
    for (i = 0; i < 5; i++) {
        v0 = v0 + v2;
    }
    v0 = 28;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    int *__p = &v0;
    *__p = *__p + 1;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
