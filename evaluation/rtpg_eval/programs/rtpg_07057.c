#include <stdlib.h>
int test_func(void) {
    int v0 = 90;
    int v1 = 45;
    int v2 = 75;
    int i;
    if (v0 > v2) { v0 = v2; }
    v1 = v1 + v0;
    for (i = 0; i < 6; i++) {
        v1 = v1 + v1;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
