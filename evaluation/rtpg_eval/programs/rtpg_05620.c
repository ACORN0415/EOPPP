#include <stdlib.h>
int __arr_5620[10];
int test_func(void) {
    int v0 = 31;
    int v1 = 96;
    int v2 = 73;
    int v3 = 54;
    int v4 = 13;
    int v5 = 31;
    int v6 = 34;
    int i;
    v0 = 46;
    if (v1 > v2) { v1 = v2; }
    for (i = 0; i < 10; i++) { __arr_5620[i] = v6 + i; }
    int *__p = &v6;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
