#include <stdlib.h>
int test_func(void) {
    int v0 = 17;
    int v1 = 44;
    int v2 = 0;
    int v3 = 53;
    int v4 = 55;
    int i;
    v4 = v4 - v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
