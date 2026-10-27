#include <stdlib.h>
int __arr_4685[10];
int test_func(void) {
    int v0 = 24;
    int v1 = 98;
    int v2 = 96;
    int i;
    v1 = v1 - v0;
    v0 = v0 + v0;
    for (i = 0; i < 10; i++) { __arr_4685[i] = v2 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
