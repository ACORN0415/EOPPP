#include <stdlib.h>
int test_func(void) {
    int v0 = 23;
    int v1 = 10;
    int v2 = 87;
    int v3 = 20;
    int i;
    v0 = v0 * 7;
    for (i = 0; i < 11; i++) {
        v1 = v1 + v3;
    }
    v3 = v3 / (v0 + 1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
