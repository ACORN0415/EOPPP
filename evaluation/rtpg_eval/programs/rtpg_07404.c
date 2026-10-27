#include <stdlib.h>
int test_func(void) {
    int v0 = 55;
    int v1 = 56;
    int v2 = 2;
    int v3 = 8;
    int v4 = 11;
    int i;
    v1 = v1 * 10;
    if (v3 > v0) { v3 = v0; }
    v1 = 40;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    int *__p = &v1;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
