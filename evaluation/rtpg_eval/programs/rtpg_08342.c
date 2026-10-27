#include <stdlib.h>
int __arr_8342[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 100;
    int v2 = 86;
    int v3 = 4;
    int v4 = 28;
    int v5 = 30;
    int i;
    for (i = 0; i < 10; i++) { __arr_8342[i] = v1 + i; }
    v5 = v5 - v4;
    v5 = 99;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    v5 = v5 ^ v2;
    return v0;
}
int main(void) { return test_func(); }
