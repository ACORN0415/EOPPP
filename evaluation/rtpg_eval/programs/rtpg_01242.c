#include <stdlib.h>
int __arr_1242[10];
int test_func(void) {
    int v0 = 0;
    int v1 = 100;
    int v2 = 7;
    int i;
    v1 = 50;
    for (i = 0; i < 10; i++) { __arr_1242[i] = v1 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
