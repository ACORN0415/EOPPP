#include <stdlib.h>
int __arr_7258[10];
int test_func(void) {
    int v0 = 80;
    int v1 = 23;
    int v2 = 57;
    int v3 = 1;
    int v4 = 23;
    int v5 = 73;
    int v6 = 10;
    int i;
    v4 = v4 * 3;
    for (i = 0; i < 10; i++) { __arr_7258[i] = v3 + i; }
    int *__p = &v4;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
