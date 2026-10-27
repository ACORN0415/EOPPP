#include <stdlib.h>
int __arr_5647[10];
int test_func(void) {
    int v0 = 96;
    int v1 = 6;
    int v2 = 98;
    int v3 = 11;
    int v4 = 31;
    int v5 = 53;
    int v6 = 56;
    int i;
    v2 = v2 * 3;
    v3 = v3 - v5;
    for (i = 0; i < 10; i++) { __arr_5647[i] = v1 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
