#include <stdlib.h>
int __arr_4754[10];
int test_func(void) {
    int v0 = 95;
    int v1 = 75;
    int v2 = 41;
    int v3 = 2;
    int v4 = 66;
    int v5 = 22;
    int v6 = 98;
    int i;
    for (i = 0; i < 10; i++) { __arr_4754[i] = v2 + i; }
    v4 = v4 * 7;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
