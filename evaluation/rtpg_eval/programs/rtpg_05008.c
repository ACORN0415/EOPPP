#include <stdlib.h>
int test_func(void) {
    int v0 = 13;
    int v1 = 19;
    int v2 = 86;
    int v3 = 62;
    int v4 = 14;
    int v5 = 21;
    int v6 = 54;
    int i;
    if (v0 > v0) { v0 = v0; }
    v1 = 78;
    int *__p = &v2;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
