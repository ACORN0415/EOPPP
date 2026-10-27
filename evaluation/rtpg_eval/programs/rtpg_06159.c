#include <stdlib.h>
int test_func(void) {
    int v0 = 3;
    int v1 = 75;
    int v2 = 24;
    int v3 = 57;
    int v4 = 17;
    int v5 = 52;
    int v6 = 99;
    int v7 = 72;
    int i;
    v0 = v0 - v5;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    v3 = v3 % (v5 + 1);
    return v0;
}
int main(void) { return test_func(); }
