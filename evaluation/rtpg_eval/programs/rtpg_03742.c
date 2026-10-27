#include <stdlib.h>
int test_func(void) {
    int v0 = 99;
    int v1 = 69;
    int v2 = 55;
    int v3 = 55;
    int v4 = 42;
    int v5 = 6;
    int i;
    v0 = v0 - v4;
    v1 = v1 * 7;
    v2 = v2 + v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
