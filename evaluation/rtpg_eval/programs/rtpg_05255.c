#include <stdlib.h>
int test_func(void) {
    int v0 = 69;
    int v1 = 82;
    int v2 = 97;
    int v3 = 66;
    int v4 = 1;
    int v5 = 73;
    int v6 = 42;
    int i;
    v0 = v0 + v1;
    for (i = 0; i < 6; i++) {
        v3 = v3 + v3;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
