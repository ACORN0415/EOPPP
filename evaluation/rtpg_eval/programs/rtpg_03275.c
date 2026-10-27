#include <stdlib.h>
int __arr_3275[10];
int test_func(void) {
    int v0 = 1;
    int v1 = 46;
    int v2 = 39;
    int v3 = 12;
    int v4 = 0;
    int v5 = 60;
    int v6 = 96;
    int i;
    for (i = 0; i < 10; i++) { __arr_3275[i] = v5 + i; }
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
