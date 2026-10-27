#include <stdlib.h>
int __arr_4609[10];
int test_func(void) {
    int v0 = 69;
    int v1 = 5;
    int v2 = 57;
    int i;
    for (i = 0; i < 10; i++) { __arr_4609[i] = v0 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
