#include <stdlib.h>
int __arr_8694[10];
int test_func(void) {
    int v0 = 10;
    int v1 = 47;
    int v2 = 55;
    int v3 = 41;
    int v4 = 93;
    int v5 = 25;
    int v6 = 8;
    int v7 = 58;
    int i;
    v6 = v6 + v4;
    for (i = 0; i < 10; i++) { __arr_8694[i] = v4 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
