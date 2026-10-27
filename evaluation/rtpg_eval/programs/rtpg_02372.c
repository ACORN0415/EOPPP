#include <stdlib.h>
int test_func(void) {
    int v0 = 53;
    int v1 = 11;
    int v2 = 70;
    int v3 = 64;
    int i;
    v1 = v1 - v2;
    for (i = 0; i < 7; i++) {
        v3 = v3 + v3;
    }
    int *__p = &v3;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
