#include <stdlib.h>
int test_func(void) {
    int v0 = 53;
    int v1 = 91;
    int v2 = 18;
    int v3 = 95;
    int v4 = 2;
    int v5 = 58;
    int v6 = 38;
    int v7 = 42;
    int i;
    v5 = v5 - v6;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
