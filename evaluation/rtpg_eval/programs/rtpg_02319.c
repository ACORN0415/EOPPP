#include <stdlib.h>
int test_func(void) {
    int v0 = 3;
    int v1 = 95;
    int v2 = 63;
    int v3 = 86;
    int v4 = 46;
    int v5 = 10;
    int v6 = 7;
    int v7 = 11;
    int i;
    v7 = v7 + v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
