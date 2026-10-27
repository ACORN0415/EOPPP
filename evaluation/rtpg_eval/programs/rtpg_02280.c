#include <stdlib.h>
int test_func(void) {
    int v0 = 49;
    int v1 = 38;
    int v2 = 69;
    int v3 = 77;
    int v4 = 72;
    int v5 = 84;
    int v6 = 67;
    int v7 = 3;
    int i;
    v5 = v5 * 2;
    for (i = 0; i < 6; i++) {
        v7 = v7 + v7;
    }
    if (v0 > v5) { v0 = v5; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    int *__p = &v6;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
