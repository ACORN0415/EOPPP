#include <stdlib.h>
int test_func(void) {
    int v0 = 44;
    int v1 = 88;
    int v2 = 22;
    int v3 = 90;
    int v4 = 32;
    int v5 = 11;
    int v6 = 53;
    int v7 = 65;
    int i;
    v4 = v4 % (v0 + 1);
    int *__p = &v2;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
