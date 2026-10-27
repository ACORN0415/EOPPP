#include <stdlib.h>
int test_func(void) {
    int v0 = 30;
    int v1 = 84;
    int v2 = 34;
    int v3 = 81;
    int v4 = 85;
    int v5 = 9;
    int v6 = 23;
    int v7 = 29;
    int i;
    v7 = v7 - v0;
    v5 = v5 & v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
