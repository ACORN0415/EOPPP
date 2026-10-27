#include <stdlib.h>
int test_func(void) {
    int v0 = 7;
    int v1 = 23;
    int v2 = 52;
    int v3 = 54;
    int v4 = 81;
    int v5 = 28;
    int v6 = 52;
    int v7 = 83;
    int i;
    for (i = 0; i < 5; i++) {
        v0 = v0 + v7;
    }
    v3 = v3 * 3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
