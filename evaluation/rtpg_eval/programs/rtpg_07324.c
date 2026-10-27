#include <stdlib.h>
int test_func(void) {
    int v0 = 5;
    int v1 = 86;
    int v2 = 29;
    int v3 = 6;
    int v4 = 38;
    int v5 = 71;
    int v6 = 77;
    int v7 = 97;
    int i;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    v3 = v3 / (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
