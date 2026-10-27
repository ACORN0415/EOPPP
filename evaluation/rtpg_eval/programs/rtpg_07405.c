#include <stdlib.h>
int __arr_7405[10];
int test_func(void) {
    int v0 = 0;
    int v1 = 51;
    int v2 = 90;
    int v3 = 14;
    int v4 = 94;
    int v5 = 100;
    int v6 = 30;
    int i;
    v6 = v6 - v5;
    v5 = 9;
    for (i = 0; i < 10; i++) { __arr_7405[i] = v2 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
