#include <stdlib.h>
int __arr_2589[10];
int test_func(void) {
    int v0 = 98;
    int v1 = 62;
    int v2 = 56;
    int v3 = 15;
    int v4 = 24;
    int i;
    for (i = 0; i < 10; i++) { __arr_2589[i] = v4 + i; }
    if (v3 > v4) { v3 = v4; }
    v4 = 92;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
