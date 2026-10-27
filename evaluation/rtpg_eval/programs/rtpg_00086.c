#include <stdlib.h>
int __arr_86[10];
int test_func(void) {
    int v0 = 64;
    int v1 = 13;
    int v2 = 55;
    int v3 = 69;
    int v4 = 36;
    int v5 = 6;
    int v6 = 25;
    int v7 = 56;
    int i;
    v2 = v2 + v5;
    v1 = v1 - v4;
    for (i = 0; i < 10; i++) { __arr_86[i] = v0 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
