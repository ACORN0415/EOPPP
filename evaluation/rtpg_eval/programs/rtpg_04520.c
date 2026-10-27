#include <stdlib.h>
int __arr_4520[10];
int test_func(void) {
    int v0 = 60;
    int v1 = 7;
    int v2 = 37;
    int v3 = 31;
    int v4 = 57;
    int v5 = 30;
    int v6 = 98;
    int v7 = 94;
    int i;
    v4 = 31;
    for (i = 0; i < 10; i++) { __arr_4520[i] = v7 + i; }
    v1 = v1 * 3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
