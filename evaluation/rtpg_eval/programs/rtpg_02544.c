#include <stdlib.h>
int test_func(void) {
    int v0 = 52;
    int v1 = 71;
    int v2 = 86;
    int v3 = 97;
    int v4 = 16;
    int v5 = 60;
    int v6 = 69;
    int i;
    v0 = v0 - v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
