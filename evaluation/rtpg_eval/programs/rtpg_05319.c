#include <stdlib.h>
int test_func(void) {
    int v0 = 44;
    int v1 = 21;
    int v2 = 39;
    int v3 = 99;
    int v4 = 49;
    int v5 = 59;
    int i;
    v5 = 20;
    v4 = v4 / (v2 + 1);
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
