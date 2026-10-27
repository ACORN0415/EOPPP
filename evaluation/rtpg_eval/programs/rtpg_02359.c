#include <stdlib.h>
int test_func(void) {
    int v0 = 71;
    int v1 = 50;
    int v2 = 86;
    int v3 = 0;
    int i;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v2 = v2 | v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
