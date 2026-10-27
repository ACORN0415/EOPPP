#include <stdlib.h>
int test_func(void) {
    int v0 = 77;
    int v1 = 13;
    int v2 = 17;
    int v3 = 68;
    int v4 = 14;
    int v5 = 35;
    int v6 = 47;
    int i;
    for (i = 0; i < 18; i++) {
        v2 = v2 + v5;
    }
    v1 = 52;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
