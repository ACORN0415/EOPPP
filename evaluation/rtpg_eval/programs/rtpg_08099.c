#include <stdlib.h>
int test_func(void) {
    int v0 = 58;
    int v1 = 57;
    int v2 = 96;
    int v3 = 69;
    int v4 = 28;
    int v5 = 0;
    int i;
    v4 = v4 * 8;
    for (i = 0; i < 13; i++) {
        v2 = v2 + v3;
    }
    if (v1 > v2) { v1 = v2; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
