#include <stdlib.h>
int test_func(void) {
    int v0 = 81;
    int v1 = 34;
    int v2 = 74;
    int v3 = 99;
    int v4 = 98;
    int v5 = 19;
    int i;
    v3 = 87;
    int *__p = &v5;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
