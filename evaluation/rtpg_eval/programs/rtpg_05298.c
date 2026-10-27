#include <stdlib.h>
int test_func(void) {
    int v0 = 67;
    int v1 = 8;
    int v2 = 77;
    int v3 = 14;
    int v4 = 5;
    int v5 = 15;
    int v6 = 15;
    int v7 = 28;
    int i;
    v2 = v2 + v2;
    v0 = v0 * 5;
    for (i = 0; i < 7; i++) {
        v5 = v5 + v5;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
