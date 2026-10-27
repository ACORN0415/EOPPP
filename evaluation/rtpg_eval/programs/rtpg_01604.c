#include <stdlib.h>
int test_func(void) {
    int v0 = 17;
    int v1 = 8;
    int v2 = 19;
    int v3 = 96;
    int v4 = 54;
    int i;
    v2 = v2 + v2;
    v3 = v3 - v2;
    v1 = v1 * 10;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    v4 = v4 % (v3 + 1);
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
