#include <stdlib.h>
int __arr_520[10];
int test_func(void) {
    int v0 = 88;
    int v1 = 7;
    int v2 = 50;
    int v3 = 91;
    int v4 = 54;
    int v5 = 89;
    int v6 = 94;
    int i;
    for (i = 0; i < 10; i++) { __arr_520[i] = v5 + i; }
    v6 = 61;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
