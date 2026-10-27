#include <stdlib.h>
int __arr_4306[10];
int test_func(void) {
    int v0 = 37;
    int v1 = 88;
    int v2 = 41;
    int v3 = 69;
    int v4 = 55;
    int v5 = 3;
    int v6 = 67;
    int v7 = 67;
    int i;
    v4 = v4 + v3;
    for (i = 0; i < 10; i++) { __arr_4306[i] = v3 + i; }
    v7 = v7 % (v2 + 1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
