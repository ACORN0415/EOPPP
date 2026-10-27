#include <stdlib.h>
int __arr_2056[10];
int test_func(void) {
    int v0 = 53;
    int v1 = 94;
    int v2 = 14;
    int v3 = 70;
    int v4 = 18;
    int v5 = 23;
    int v6 = 40;
    int v7 = 80;
    int i;
    v6 = v6 * 7;
    for (i = 0; i < 10; i++) { __arr_2056[i] = v6 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v7;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
