#include <stdlib.h>
int __arr_278[10];
int test_func(void) {
    int v0 = 29;
    int v1 = 13;
    int v2 = 88;
    int v3 = 73;
    int v4 = 23;
    int v5 = 56;
    int v6 = 37;
    int v7 = 37;
    int i;
    v1 = v1 - v6;
    for (i = 0; i < 10; i++) { __arr_278[i] = v6 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
