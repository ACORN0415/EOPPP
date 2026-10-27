#include <stdlib.h>
int test_func(void) {
    int v0 = 39;
    int v1 = 77;
    int v2 = 32;
    int v3 = 42;
    int v4 = 39;
    int v5 = 88;
    int v6 = 15;
    int i;
    for (i = 0; i < 19; i++) {
        v0 = v0 + v5;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
