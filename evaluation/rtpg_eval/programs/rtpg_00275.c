#include <stdlib.h>
int __arr_275[10];
int test_func(void) {
    int v0 = 82;
    int v1 = 5;
    int v2 = 13;
    int v3 = 90;
    int i;
    if (v1 > v2) { v1 = v2; }
    for (i = 0; i < 10; i++) { __arr_275[i] = v0 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
