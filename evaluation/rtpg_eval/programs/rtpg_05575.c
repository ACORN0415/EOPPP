#include <stdlib.h>
int test_func(void) {
    int v0 = 82;
    int v1 = 16;
    int v2 = 97;
    int v3 = 75;
    int i;
    v2 = v2 * 4;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
