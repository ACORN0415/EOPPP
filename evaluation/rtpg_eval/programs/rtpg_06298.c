#include <stdlib.h>
int __arr_6298[10];
int test_func(void) {
    int v0 = 82;
    int v1 = 60;
    int v2 = 0;
    int v3 = 23;
    int v4 = 61;
    int v5 = 17;
    int i;
    for (i = 0; i < 10; i++) { __arr_6298[i] = v0 + i; }
    if (v4 > v1) { v4 = v1; }
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
