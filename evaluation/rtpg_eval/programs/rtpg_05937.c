#include <stdlib.h>
int test_func(void) {
    int v0 = 61;
    int v1 = 19;
    int v2 = 6;
    int v3 = 73;
    int v4 = 70;
    int v5 = 89;
    int v6 = 72;
    int v7 = 86;
    int i;
    v0 = 1;
    v3 = v3 * 8;
    v5 = v5 + v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
