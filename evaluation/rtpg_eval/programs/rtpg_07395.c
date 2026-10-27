#include <stdlib.h>
int __arr_7395[10];
int test_func(void) {
    int v0 = 7;
    int v1 = 77;
    int v2 = 27;
    int v3 = 38;
    int v4 = 69;
    int v5 = 63;
    int v6 = 49;
    int i;
    for (i = 0; i < 10; i++) { __arr_7395[i] = v2 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    v2 = v2 & v6;
    return v0;
}
int main(void) { return test_func(); }
