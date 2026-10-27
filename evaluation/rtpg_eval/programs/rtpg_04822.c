#include <stdlib.h>
int test_func(void) {
    int v0 = 62;
    int v1 = 84;
    int v2 = 44;
    int v3 = 7;
    int v4 = 29;
    int v5 = 70;
    int v6 = 26;
    int i;
    if (v3 > v1) { v3 = v1; }
    for (i = 0; i < 14; i++) {
        v5 = v5 + v0;
    }
    v2 = v2 + v0;
    v1 = v1 / (v3 + 1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
