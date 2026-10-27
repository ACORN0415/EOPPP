#include <stdlib.h>
int __arr_5831[10];
int test_func(void) {
    int v0 = 0;
    int v1 = 56;
    int v2 = 37;
    int v3 = 31;
    int v4 = 42;
    int v5 = 98;
    int i;
    for (i = 0; i < 10; i++) { __arr_5831[i] = v0 + i; }
    v2 = v2 - v1;
    v0 = v0 % (v2 + 1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
