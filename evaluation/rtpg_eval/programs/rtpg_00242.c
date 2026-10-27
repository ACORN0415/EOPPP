#include <stdlib.h>
int __arr_242[10];
int test_func(void) {
    int v0 = 7;
    int v1 = 27;
    int v2 = 8;
    int v3 = 92;
    int v4 = 58;
    int v5 = 51;
    int i;
    for (i = 0; i < 10; i++) { __arr_242[i] = v2 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
