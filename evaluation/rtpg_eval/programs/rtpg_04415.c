#include <stdlib.h>
int __arr_4415[10];
int test_func(void) {
    int v0 = 24;
    int v1 = 79;
    int v2 = 88;
    int v3 = 82;
    int v4 = 31;
    int v5 = 2;
    int v6 = 22;
    int i;
    for (i = 0; i < 10; i++) { __arr_4415[i] = v5 + i; }
    v2 = v2 * 4;
    if (v1 > v5) { v1 = v5; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
