#include <stdlib.h>
int test_func(void) {
    int v0 = 8;
    int v1 = 14;
    int v2 = 16;
    int v3 = 70;
    int v4 = 83;
    int v5 = 37;
    int v6 = 66;
    int i;
    v6 = 33;
    for (i = 0; i < 19; i++) {
        v1 = v1 + v2;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
