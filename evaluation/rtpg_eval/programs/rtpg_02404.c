#include <stdlib.h>
int __arr_2404[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 82;
    int v2 = 13;
    int v3 = 51;
    int v4 = 3;
    int i;
    for (i = 0; i < 10; i++) { __arr_2404[i] = v4 + i; }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
