#include <stdlib.h>
int __arr_8232[10];
int test_func(void) {
    int v0 = 34;
    int v1 = 51;
    int v2 = 30;
    int v3 = 47;
    int v4 = 28;
    int v5 = 83;
    int v6 = 40;
    int v7 = 9;
    int i;
    v1 = v1 + v4;
    v0 = v0 * 3;
    for (i = 0; i < 10; i++) { __arr_8232[i] = v7 + i; }
    int *__p = &v6;
    *__p = *__p + 1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
