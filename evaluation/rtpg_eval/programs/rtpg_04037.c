#include <stdlib.h>
int __arr_4037[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 56;
    int v2 = 56;
    int v3 = 43;
    int v4 = 81;
    int i;
    v2 = 73;
    for (i = 0; i < 10; i++) { __arr_4037[i] = v3 + i; }
    v3 = v3 - v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
