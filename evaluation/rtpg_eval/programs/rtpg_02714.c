#include <stdlib.h>
int __arr_2714[10];
int test_func(void) {
    int v0 = 10;
    int v1 = 2;
    int v2 = 56;
    int v3 = 64;
    int v4 = 16;
    int v5 = 34;
    int v6 = 88;
    int i;
    for (i = 0; i < 10; i++) { __arr_2714[i] = v6 + i; }
    v4 = v4 + v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
