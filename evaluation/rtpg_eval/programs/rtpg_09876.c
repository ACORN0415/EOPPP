#include <stdlib.h>
int test_func(void) {
    int v0 = 100;
    int v1 = 39;
    int v2 = 58;
    int v3 = 75;
    int v4 = 54;
    int v5 = 6;
    int v6 = 92;
    int v7 = 51;
    int i;
    for (i = 0; i < 17; i++) {
        v0 = v0 + v4;
    }
    v3 = v3 * 6;
    v1 = v1 - v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    v5 = v5 & v7;
    return v0;
}
int main(void) { return test_func(); }
