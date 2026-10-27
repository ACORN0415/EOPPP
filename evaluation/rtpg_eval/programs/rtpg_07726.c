#include <stdlib.h>
int test_func(void) {
    int v0 = 87;
    int v1 = 46;
    int v2 = 65;
    int v3 = 99;
    int v4 = 6;
    int i;
    for (i = 0; i < 16; i++) {
        v4 = v4 + v0;
    }
    v1 = 96;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
