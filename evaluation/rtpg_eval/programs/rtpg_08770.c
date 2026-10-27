#include <stdlib.h>
int test_func(void) {
    int v0 = 88;
    int v1 = 33;
    int v2 = 95;
    int v3 = 91;
    int v4 = 12;
    int v5 = 49;
    int i;
    v3 = v3 * 6;
    int *__p = &v2;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
