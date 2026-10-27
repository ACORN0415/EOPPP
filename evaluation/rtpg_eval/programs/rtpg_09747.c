#include <stdlib.h>
int test_func(void) {
    int v0 = 61;
    int v1 = 24;
    int v2 = 42;
    int v3 = 37;
    int i;
    if (v1 > v0) { v1 = v0; }
    int *__p = &v1;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
