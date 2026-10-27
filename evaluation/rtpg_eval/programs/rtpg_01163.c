#include <stdlib.h>
int test_func(void) {
    int v0 = 6;
    int v1 = 17;
    int v2 = 9;
    int v3 = 15;
    int v4 = 38;
    int v5 = 66;
    int v6 = 46;
    int i;
    for (i = 0; i < 18; i++) {
        v0 = v0 + v4;
    }
    int *__p = &v0;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    v2 = v2 / (v5 + 1);
    return v0;
}
int main(void) { return test_func(); }
