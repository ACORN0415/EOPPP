#include <stdlib.h>
int __arr_4552[10];
int test_func(void) {
    int v0 = 61;
    int v1 = 90;
    int v2 = 63;
    int i;
    for (i = 0; i < 10; i++) { __arr_4552[i] = v2 + i; }
    v0 = v0 + v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
