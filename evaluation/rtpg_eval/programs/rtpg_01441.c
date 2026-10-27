#include <stdlib.h>
int __arr_1441[10];
int test_func(void) {
    int v0 = 1;
    int v1 = 65;
    int v2 = 20;
    int v3 = 42;
    int v4 = 92;
    int v5 = 30;
    int v6 = 72;
    int i;
    for (i = 0; i < 10; i++) { __arr_1441[i] = v2 + i; }
    v1 = v1 + v2;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
