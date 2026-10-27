#include <stdlib.h>
int test_func(void) {
    int v0 = 89;
    int v1 = 22;
    int v2 = 69;
    int v3 = 16;
    int i;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v2;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    v1 = v1 / (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
