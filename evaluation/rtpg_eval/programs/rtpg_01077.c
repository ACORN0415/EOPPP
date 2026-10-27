#include <stdlib.h>
int __arr_1077[10];
int test_func(void) {
    int v0 = 39;
    int v1 = 91;
    int v2 = 65;
    int v3 = 17;
    int i;
    for (i = 0; i < 10; i++) { __arr_1077[i] = v3 + i; }
    if (v1 > v2) { v1 = v2; }
    v3 = v3 - v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
