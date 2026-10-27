#include <stdlib.h>
int test_func(void) {
    int v0 = 64;
    int v1 = 45;
    int v2 = 64;
    int v3 = 10;
    int v4 = 46;
    int v5 = 20;
    int i;
    v4 = v4 - v3;
    for (i = 0; i < 11; i++) {
        v0 = v0 + v3;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
