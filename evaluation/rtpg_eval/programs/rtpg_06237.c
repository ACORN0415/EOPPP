#include <stdlib.h>
int __arr_6237[10];
int test_func(void) {
    int v0 = 81;
    int v1 = 27;
    int v2 = 46;
    int v3 = 58;
    int v4 = 23;
    int v5 = 98;
    int v6 = 95;
    int i;
    for (i = 0; i < 10; i++) { __arr_6237[i] = v3 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
