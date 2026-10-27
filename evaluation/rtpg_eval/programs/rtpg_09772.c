#include <stdlib.h>
int __arr_9772[10];
int test_func(void) {
    int v0 = 96;
    int v1 = 62;
    int v2 = 36;
    int v3 = 56;
    int v4 = 37;
    int v5 = 15;
    int i;
    v5 = v5 * 8;
    for (i = 0; i < 10; i++) { __arr_9772[i] = v0 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
