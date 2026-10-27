#include <stdlib.h>
int test_func(void) {
    int v0 = 87;
    int v1 = 51;
    int v2 = 14;
    int v3 = 84;
    int v4 = 84;
    int v5 = 93;
    int i;
    v3 = v3 - v1;
    v3 = v3 * 10;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
