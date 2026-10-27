#include <stdlib.h>
int test_func(void) {
    int v0 = 46;
    int v1 = 33;
    int v2 = 88;
    int v3 = 51;
    int i;
    v2 = v2 + v2;
    v0 = 7;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
