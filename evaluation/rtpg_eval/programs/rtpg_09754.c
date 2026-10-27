#include <stdlib.h>
int test_func(void) {
    int v0 = 13;
    int v1 = 8;
    int v2 = 71;
    int v3 = 79;
    int v4 = 98;
    int v5 = 5;
    int v6 = 86;
    int v7 = 97;
    int i;
    for (i = 0; i < 14; i++) {
        v3 = v3 + v0;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
