#include <stdlib.h>
int test_func(void) {
    int v0 = 54;
    int v1 = 41;
    int v2 = 75;
    int v3 = 75;
    int v4 = 6;
    int v5 = 73;
    int i;
    v2 = v2 * 3;
    for (i = 0; i < 9; i++) {
        v0 = v0 + v4;
    }
    v2 = v2 + v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
