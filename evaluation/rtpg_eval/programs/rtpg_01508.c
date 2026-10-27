#include <stdlib.h>
int test_func(void) {
    int v0 = 36;
    int v1 = 33;
    int v2 = 99;
    int i;
    v1 = v1 + v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
