#include <stdlib.h>
int __arr_1563[10];
int test_func(void) {
    int v0 = 99;
    int v1 = 39;
    int v2 = 24;
    int v3 = 32;
    int v4 = 95;
    int i;
    for (i = 0; i < 10; i++) { __arr_1563[i] = v2 + i; }
    for (i = 0; i < 16; i++) {
        v4 = v4 + v0;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
