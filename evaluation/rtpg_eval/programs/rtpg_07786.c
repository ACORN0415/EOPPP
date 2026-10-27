#include <stdlib.h>
int __arr_7786[10];
int test_func(void) {
    int v0 = 69;
    int v1 = 45;
    int v2 = 95;
    int v3 = 8;
    int v4 = 32;
    int v5 = 75;
    int i;
    for (i = 0; i < 10; i++) { __arr_7786[i] = v1 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
