#include <stdlib.h>
int test_func(void) {
    int v0 = 35;
    int v1 = 96;
    int v2 = 38;
    int v3 = 94;
    int i;
    v2 = v2 + v0;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
