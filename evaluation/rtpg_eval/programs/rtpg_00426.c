#include <stdlib.h>
int test_func(void) {
    int v0 = 4;
    int v1 = 75;
    int v2 = 27;
    int v3 = 62;
    int v4 = 18;
    int v5 = 21;
    int v6 = 57;
    int i;
    v2 = v2 + v3;
    int *__p = &v3;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
