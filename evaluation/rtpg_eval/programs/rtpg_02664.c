#include <stdlib.h>
int test_func(void) {
    int v0 = 86;
    int v1 = 46;
    int v2 = 46;
    int v3 = 72;
    int v4 = 32;
    int v5 = 13;
    int v6 = 82;
    int v7 = 95;
    int i;
    v6 = v6 + v7;
    if (v5 > v6) { v5 = v6; }
    v6 = v6 / (v4 + 1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
