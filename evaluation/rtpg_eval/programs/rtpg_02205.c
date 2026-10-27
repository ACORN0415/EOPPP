#include <stdlib.h>
int __arr_2205[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 95;
    int v2 = 13;
    int v3 = 21;
    int v4 = 20;
    int i;
    for (i = 0; i < 10; i++) { __arr_2205[i] = v1 + i; }
    v0 = v0 + v0;
    int *__p = &v0;
    *__p = *__p + 1;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
