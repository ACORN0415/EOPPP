#include <stdlib.h>
int __arr_7780[10];
int test_func(void) {
    int v0 = 23;
    int v1 = 21;
    int v2 = 88;
    int v3 = 63;
    int i;
    v1 = v1 + v0;
    for (i = 0; i < 10; i++) { __arr_7780[i] = v0 + i; }
    int *__p = &v0;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
