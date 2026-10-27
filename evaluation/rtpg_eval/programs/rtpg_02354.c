#include <stdlib.h>
int __arr_2354[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 3;
    int v2 = 99;
    int v3 = 96;
    int v4 = 90;
    int v5 = 49;
    int v6 = 52;
    int i;
    v4 = v4 + v0;
    for (i = 0; i < 10; i++) { __arr_2354[i] = v3 + i; }
    v5 = v5 & v6;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
