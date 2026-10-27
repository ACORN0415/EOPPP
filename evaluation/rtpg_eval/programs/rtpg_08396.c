#include <stdlib.h>
int __arr_8396[10];
int test_func(void) {
    int v0 = 58;
    int v1 = 87;
    int v2 = 97;
    int v3 = 51;
    int v4 = 2;
    int v5 = 74;
    int v6 = 46;
    int v7 = 69;
    int i;
    v5 = v5 - v2;
    for (i = 0; i < 10; i++) { __arr_8396[i] = v7 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
