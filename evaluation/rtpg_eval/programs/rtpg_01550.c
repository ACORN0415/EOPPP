#include <stdlib.h>
int __arr_1550[10];
int test_func(void) {
    int v0 = 31;
    int v1 = 90;
    int v2 = 17;
    int v3 = 87;
    int v4 = 60;
    int v5 = 20;
    int v6 = 23;
    int i;
    for (i = 0; i < 10; i++) { __arr_1550[i] = v1 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
