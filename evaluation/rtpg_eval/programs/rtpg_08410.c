#include <stdlib.h>
int test_func(void) {
    int v0 = 84;
    int v1 = 94;
    int v2 = 7;
    int v3 = 53;
    int v4 = 87;
    int v5 = 36;
    int i;
    v2 = 69;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
