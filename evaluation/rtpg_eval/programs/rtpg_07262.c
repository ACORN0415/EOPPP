#include <stdlib.h>
int test_func(void) {
    int v0 = 27;
    int v1 = 52;
    int v2 = 8;
    int v3 = 12;
    int v4 = 54;
    int v5 = 58;
    int v6 = 48;
    int v7 = 65;
    int i;
    for (i = 0; i < 12; i++) {
        v4 = v4 + v3;
    }
    int *__p = &v6;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v7;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
