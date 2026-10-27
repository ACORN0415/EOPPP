#include <stdlib.h>
int __arr_5742[10];
int test_func(void) {
    int v0 = 70;
    int v1 = 98;
    int v2 = 79;
    int v3 = 7;
    int v4 = 58;
    int v5 = 79;
    int i;
    for (i = 0; i < 10; i++) { __arr_5742[i] = v1 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
