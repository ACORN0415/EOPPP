#include <stdlib.h>
int test_func(void) {
    int v0 = 37;
    int v1 = 51;
    int v2 = 78;
    int v3 = 33;
    int v4 = 60;
    int v5 = 18;
    int v6 = 64;
    int v7 = 46;
    int i;
    v7 = v7 - v0;
    v2 = v2 | v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
