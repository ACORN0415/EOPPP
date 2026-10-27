#include <stdlib.h>
int test_func(void) {
    int v0 = 78;
    int v1 = 82;
    int v2 = 81;
    int v3 = 99;
    int i;
    v2 = v2 - v0;
    int *__p = &v1;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
