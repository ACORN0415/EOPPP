#include <stdlib.h>
int test_func(void) {
    int v0 = 96;
    int v1 = 47;
    int v2 = 64;
    int v3 = 30;
    int i;
    if (v1 > v0) { v1 = v0; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
