#include <stdlib.h>
int __arr_3011[10];
int test_func(void) {
    int v0 = 95;
    int v1 = 44;
    int v2 = 26;
    int v3 = 65;
    int v4 = 96;
    int v5 = 75;
    int i;
    if (v5 > v3) { v5 = v3; }
    for (i = 0; i < 8; i++) {
        v2 = v2 + v4;
    }
    for (i = 0; i < 10; i++) { __arr_3011[i] = v3 + i; }
    v4 = v4 | v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
