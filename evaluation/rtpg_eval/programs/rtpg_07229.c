#include <stdlib.h>
int __arr_7229[10];
int test_func(void) {
    int v0 = 56;
    int v1 = 10;
    int v2 = 90;
    int v3 = 4;
    int v4 = 44;
    int v5 = 87;
    int v6 = 22;
    int v7 = 80;
    int i;
    v2 = v2 + v6;
    for (i = 0; i < 10; i++) { __arr_7229[i] = v6 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v7;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
