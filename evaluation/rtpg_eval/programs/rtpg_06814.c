#include <stdlib.h>
int test_func(void) {
    int v0 = 25;
    int v1 = 30;
    int v2 = 11;
    int v3 = 77;
    int v4 = 17;
    int i;
    for (i = 0; i < 15; i++) {
        v3 = v3 + v2;
    }
    v3 = v3 * 9;
    v2 = v2 - v4;
    int *__p = &v2;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    v2 = v2 / (v4 + 1);
    return v0;
}
int main(void) { return test_func(); }
