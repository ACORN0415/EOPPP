#include <stdlib.h>
int __arr_1825[10];
int test_func(void) {
    int v0 = 51;
    int v1 = 62;
    int v2 = 94;
    int i;
    for (i = 0; i < 10; i++) { __arr_1825[i] = v0 + i; }
    v1 = v1 ^ v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
