#include <stdlib.h>
int test_func(void) {
    int v0 = 14;
    int v1 = 88;
    int v2 = 56;
    int v3 = 37;
    int v4 = 34;
    int i;
    for (i = 0; i < 8; i++) {
        v4 = v4 + v1;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
