#include <stdlib.h>
int __arr_8899[10];
int test_func(void) {
    int v0 = 84;
    int v1 = 27;
    int v2 = 55;
    int v3 = 45;
    int v4 = 23;
    int i;
    v4 = v4 * 7;
    v4 = v4 + v2;
    for (i = 0; i < 10; i++) { __arr_8899[i] = v1 + i; }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
