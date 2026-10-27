#include <stdlib.h>
int test_func(void) {
    int v0 = 62;
    int v1 = 34;
    int v2 = 45;
    int v3 = 71;
    int v4 = 7;
    int i;
    v4 = 94;
    if (v1 > v2) { v1 = v2; }
    for (i = 0; i < 15; i++) {
        v1 = v1 + v2;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
