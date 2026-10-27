#include <stdlib.h>
int test_func(void) {
    int v0 = 49;
    int v1 = 95;
    int v2 = 45;
    int v3 = 27;
    int i;
    v3 = 27;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
