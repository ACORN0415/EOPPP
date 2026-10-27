#include <stdlib.h>
int test_func(void) {
    int v0 = 30;
    int v1 = 100;
    int v2 = 67;
    int v3 = 79;
    int v4 = 83;
    int v5 = 54;
    int v6 = 54;
    int v7 = 8;
    int i;
    v2 = 64;
    v0 = v0 - v6;
    if (v4 > v7) { v4 = v7; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v7;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
