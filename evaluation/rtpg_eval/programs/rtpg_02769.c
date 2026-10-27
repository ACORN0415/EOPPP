#include <stdlib.h>
int test_func(void) {
    int v0 = 4;
    int v1 = 82;
    int v2 = 28;
    int v3 = 57;
    int i;
    v2 = v2 + v3;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
