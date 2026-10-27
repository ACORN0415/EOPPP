#include <stdlib.h>
int test_func(void) {
    int v0 = 92;
    int v1 = 28;
    int v2 = 91;
    int v3 = 92;
    int v4 = 46;
    int v5 = 0;
    int v6 = 9;
    int v7 = 9;
    int i;
    for (i = 0; i < 17; i++) {
        v2 = v2 + v5;
    }
    v4 = v4 - v5;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
