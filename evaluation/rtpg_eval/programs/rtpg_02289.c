#include <stdlib.h>
int test_func(void) {
    int v0 = 84;
    int v1 = 26;
    int v2 = 76;
    int v3 = 30;
    int v4 = 11;
    int v5 = 6;
    int i;
    v1 = v1 * 9;
    if (v2 > v5) { v2 = v5; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
