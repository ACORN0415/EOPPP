#include <stdlib.h>
int test_func(void) {
    int v0 = 92;
    int v1 = 5;
    int v2 = 48;
    int v3 = 81;
    int v4 = 22;
    int v5 = 47;
    int v6 = 41;
    int v7 = 71;
    int i;
    v6 = v6 + v5;
    v0 = v0 * 10;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
