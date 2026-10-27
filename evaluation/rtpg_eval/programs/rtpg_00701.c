#include <stdlib.h>
int __arr_701[10];
int test_func(void) {
    int v0 = 88;
    int v1 = 36;
    int v2 = 98;
    int v3 = 8;
    int v4 = 54;
    int v5 = 71;
    int v6 = 39;
    int v7 = 49;
    int i;
    for (i = 0; i < 10; i++) { __arr_701[i] = v2 + i; }
    v4 = v4 + v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
