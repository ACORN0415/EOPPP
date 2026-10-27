#include <stdlib.h>
int test_func(void) {
    int v0 = 60;
    int v1 = 29;
    int v2 = 37;
    int v3 = 9;
    int i;
    for (i = 0; i < 9; i++) {
        v0 = v0 + v3;
    }
    v2 = v2 - v3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v1 = v1 | v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
