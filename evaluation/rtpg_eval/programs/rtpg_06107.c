#include <stdlib.h>
int __arr_6107[10];
int test_func(void) {
    int v0 = 48;
    int v1 = 49;
    int v2 = 0;
    int v3 = 72;
    int v4 = 62;
    int v5 = 80;
    int i;
    for (i = 0; i < 10; i++) { __arr_6107[i] = v2 + i; }
    v2 = v2 + v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
