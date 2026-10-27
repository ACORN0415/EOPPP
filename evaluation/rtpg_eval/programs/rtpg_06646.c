#include <stdlib.h>
int test_func(void) {
    int v0 = 97;
    int v1 = 58;
    int v2 = 18;
    int v3 = 65;
    int v4 = 95;
    int v5 = 15;
    int v6 = 95;
    int v7 = 92;
    int i;
    v7 = v7 - v3;
    v0 = v0 + v7;
    if (v1 > v4) { v1 = v4; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
