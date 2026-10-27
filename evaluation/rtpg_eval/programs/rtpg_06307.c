#include <stdlib.h>
int test_func(void) {
    int v0 = 85;
    int v1 = 99;
    int v2 = 33;
    int v3 = 19;
    int i;
    for (i = 0; i < 9; i++) {
        v3 = v3 + v3;
    }
    int *__p = &v1;
    *__p = *__p + 1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
