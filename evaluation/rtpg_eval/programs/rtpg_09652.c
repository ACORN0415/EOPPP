#include <stdlib.h>
int __arr_9652[10];
int test_func(void) {
    int v0 = 92;
    int v1 = 83;
    int v2 = 79;
    int v3 = 48;
    int v4 = 90;
    int v5 = 94;
    int v6 = 69;
    int i;
    v6 = v6 - v5;
    for (i = 0; i < 10; i++) { __arr_9652[i] = v4 + i; }
    if (v3 > v4) { v3 = v4; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
