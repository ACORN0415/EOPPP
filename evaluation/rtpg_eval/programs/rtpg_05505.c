#include <stdlib.h>
int test_func(void) {
    int v0 = 70;
    int v1 = 13;
    int v2 = 74;
    int v3 = 79;
    int v4 = 77;
    int v5 = 71;
    int v6 = 44;
    int v7 = 56;
    int i;
    v4 = v4 * 9;
    v1 = v1 - v5;
    for (i = 0; i < 5; i++) {
        v3 = v3 + v1;
    }
    v1 = v1 % (v6 + 1);
    int *__p = &v7;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v7;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
