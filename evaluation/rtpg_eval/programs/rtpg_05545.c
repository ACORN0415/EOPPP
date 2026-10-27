#include <stdlib.h>
int test_func(void) {
    int v0 = 12;
    int v1 = 3;
    int v2 = 30;
    int v3 = 51;
    int v4 = 32;
    int i;
    v1 = v1 * 7;
    v3 = v3 + v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
