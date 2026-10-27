#include <stdlib.h>
int test_func(void) {
    int v0 = 72;
    int v1 = 12;
    int v2 = 93;
    int v3 = 64;
    int v4 = 20;
    int v5 = 64;
    int v6 = 88;
    int v7 = 76;
    int i;
    for (i = 0; i < 12; i++) {
        v4 = v4 + v1;
    }
    v6 = 29;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
