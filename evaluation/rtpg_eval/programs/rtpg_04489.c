#include <stdlib.h>
int test_func(void) {
    int v0 = 16;
    int v1 = 72;
    int v2 = 88;
    int v3 = 13;
    int v4 = 59;
    int v5 = 96;
    int v6 = 88;
    int v7 = 86;
    int i;
    v2 = v2 * 6;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
