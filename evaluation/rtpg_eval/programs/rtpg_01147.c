#include <stdlib.h>
int __arr_1147[10];
int test_func(void) {
    int v0 = 15;
    int v1 = 85;
    int v2 = 55;
    int v3 = 52;
    int v4 = 99;
    int i;
    for (i = 0; i < 10; i++) { __arr_1147[i] = v0 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
