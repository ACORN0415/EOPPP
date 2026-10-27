#include <stdlib.h>
int __arr_9171[10];
int test_func(void) {
    int v0 = 59;
    int v1 = 45;
    int v2 = 31;
    int v3 = 90;
    int v4 = 46;
    int v5 = 8;
    int v6 = 81;
    int i;
    for (i = 0; i < 10; i++) { __arr_9171[i] = v3 + i; }
    v6 = v6 * 2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
