#include <stdlib.h>
int test_func(void) {
    int v0 = 86;
    int v1 = 74;
    int v2 = 92;
    int v3 = 45;
    int v4 = 24;
    int v5 = 96;
    int i;
    v5 = v5 + v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
