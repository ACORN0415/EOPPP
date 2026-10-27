#include <stdlib.h>
int test_func(void) {
    int v0 = 21;
    int v1 = 91;
    int v2 = 31;
    int i;
    v1 = v1 + v2;
    for (i = 0; i < 12; i++) {
        v1 = v1 + v1;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
