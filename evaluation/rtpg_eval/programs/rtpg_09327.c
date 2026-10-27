#include <stdlib.h>
int test_func(void) {
    int v0 = 57;
    int v1 = 77;
    int v2 = 8;
    int v3 = 43;
    int v4 = 11;
    int v5 = 57;
    int i;
    v0 = v0 * 2;
    if (v3 > v5) { v3 = v5; }
    v0 = v0 + v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    v1 = v1 / (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
