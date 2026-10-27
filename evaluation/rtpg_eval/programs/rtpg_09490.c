#include <stdlib.h>
int test_func(void) {
    int v0 = 30;
    int v1 = 37;
    int v2 = 95;
    int v3 = 29;
    int i;
    v3 = 96;
    v0 = v0 + v2;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
