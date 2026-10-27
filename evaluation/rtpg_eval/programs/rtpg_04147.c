#include <stdlib.h>
int test_func(void) {
    int v0 = 86;
    int v1 = 8;
    int v2 = 98;
    int v3 = 64;
    int v4 = 29;
    int v5 = 56;
    int v6 = 66;
    int i;
    v4 = v4 + v0;
    for (i = 0; i < 12; i++) {
        v6 = v6 + v5;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
