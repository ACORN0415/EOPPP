#include <stdlib.h>
int __arr_2792[10];
int test_func(void) {
    int v0 = 44;
    int v1 = 9;
    int v2 = 93;
    int v3 = 32;
    int v4 = 9;
    int v5 = 2;
    int v6 = 54;
    int v7 = 81;
    int i;
    if (v1 > v3) { v1 = v3; }
    v1 = v1 + v3;
    for (i = 0; i < 10; i++) { __arr_2792[i] = v3 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
