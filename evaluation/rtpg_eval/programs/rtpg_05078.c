#include <stdlib.h>
int test_func(void) {
    int v0 = 71;
    int v1 = 25;
    int v2 = 12;
    int v3 = 48;
    int v4 = 14;
    int v5 = 98;
    int v6 = 23;
    int v7 = 84;
    int i;
    v4 = 22;
    v4 = v4 * 6;
    v3 = v3 + v0;
    int *__p = &v5;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
