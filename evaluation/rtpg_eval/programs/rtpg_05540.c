#include <stdlib.h>
int test_func(void) {
    int v0 = 91;
    int v1 = 59;
    int v2 = 16;
    int v3 = 13;
    int v4 = 43;
    int v5 = 65;
    int i;
    v1 = v1 - v3;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
