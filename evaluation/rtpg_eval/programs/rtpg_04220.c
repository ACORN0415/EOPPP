#include <stdlib.h>
int test_func(void) {
    int v0 = 62;
    int v1 = 31;
    int v2 = 60;
    int v3 = 81;
    int v4 = 36;
    int i;
    v1 = 33;
    if (v0 > v0) { v0 = v0; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
