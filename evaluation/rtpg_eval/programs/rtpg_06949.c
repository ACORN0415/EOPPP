#include <stdlib.h>
int __arr_6949[10];
int test_func(void) {
    int v0 = 67;
    int v1 = 47;
    int v2 = 25;
    int v3 = 9;
    int v4 = 1;
    int v5 = 9;
    int i;
    if (v1 > v2) { v1 = v2; }
    v4 = v4 + v0;
    for (i = 0; i < 10; i++) { __arr_6949[i] = v4 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
