#include <stdlib.h>
int test_func(void) {
    int v0 = 13;
    int v1 = 24;
    int v2 = 56;
    int i;
    v1 = 29;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
