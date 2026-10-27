#include <stdlib.h>
int __arr_703[10];
int test_func(void) {
    int v0 = 9;
    int v1 = 49;
    int v2 = 100;
    int i;
    v2 = v2 * 3;
    for (i = 0; i < 10; i++) { __arr_703[i] = v0 + i; }
    if (v2 > v1) { v2 = v1; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
