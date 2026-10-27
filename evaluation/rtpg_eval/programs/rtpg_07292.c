#include <stdlib.h>
int test_func(void) {
    int v0 = 86;
    int v1 = 88;
    int v2 = 18;
    int v3 = 47;
    int v4 = 10;
    int v5 = 10;
    int i;
    v3 = v3 + v0;
    v5 = v5 - v1;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
