#include <stdlib.h>
int test_func(void) {
    int v0 = 32;
    int v1 = 60;
    int v2 = 60;
    int v3 = 81;
    int v4 = 66;
    int v5 = 88;
    int v6 = 38;
    int i;
    v0 = v0 - v6;
    v5 = v5 * 3;
    if (v5 > v6) { v5 = v6; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
