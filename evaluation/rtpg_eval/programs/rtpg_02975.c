#include <stdlib.h>
int test_func(void) {
    int v0 = 3;
    int v1 = 9;
    int v2 = 22;
    int v3 = 39;
    int v4 = 69;
    int v5 = 52;
    int v6 = 66;
    int v7 = 94;
    int i;
    if (v3 > v2) { v3 = v2; }
    v6 = v6 * 10;
    v7 = v7 + v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v7;
    free(__pm);
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
