#include <stdlib.h>
int __arr_949[10];
int test_func(void) {
    int v0 = 100;
    int v1 = 33;
    int v2 = 40;
    int v3 = 32;
    int v4 = 65;
    int v5 = 41;
    int v6 = 50;
    int v7 = 78;
    int i;
    for (i = 0; i < 10; i++) { __arr_949[i] = v1 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v7;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
