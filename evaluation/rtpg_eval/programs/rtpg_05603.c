#include <stdlib.h>
int __arr_5603[10];
int test_func(void) {
    int v0 = 13;
    int v1 = 20;
    int v2 = 12;
    int v3 = 9;
    int v4 = 69;
    int v5 = 39;
    int v6 = 29;
    int i;
    for (i = 0; i < 10; i++) { __arr_5603[i] = v2 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
