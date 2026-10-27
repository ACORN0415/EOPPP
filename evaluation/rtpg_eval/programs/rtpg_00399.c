#include <stdlib.h>
int test_func(void) {
    int v0 = 0;
    int v1 = 83;
    int v2 = 31;
    int v3 = 38;
    int v4 = 27;
    int v5 = 11;
    int i;
    v0 = v0 + v5;
    for (i = 0; i < 14; i++) {
        v0 = v0 + v2;
    }
    v3 = v3 * 9;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
