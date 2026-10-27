#include <stdlib.h>
int test_func(void) {
    int v0 = 45;
    int v1 = 86;
    int v2 = 48;
    int i;
    v0 = 90;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v2;
    }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
