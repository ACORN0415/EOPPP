#include <stdlib.h>
int __arr_2046[10];
int test_func(void) {
    int v0 = 95;
    int v1 = 16;
    int v2 = 91;
    int v3 = 65;
    int v4 = 69;
    int v5 = 56;
    int i;
    for (i = 0; i < 10; i++) { __arr_2046[i] = v1 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
