#include <stdlib.h>
int __arr_7911[10];
int test_func(void) {
    int v0 = 32;
    int v1 = 38;
    int v2 = 50;
    int v3 = 6;
    int i;
    v0 = v0 * 2;
    for (i = 0; i < 10; i++) { __arr_7911[i] = v2 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
