#include <stdlib.h>
int test_func(void) {
    int v0 = 65;
    int v1 = 66;
    int v2 = 9;
    int v3 = 63;
    int v4 = 25;
    int v5 = 63;
    int v6 = 31;
    int v7 = 18;
    int i;
    for (i = 0; i < 10; i++) {
        v4 = v4 + v6;
    }
    v3 = v3 * 9;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v7;
    free(__pm);
    v0 = v0 ^ v6;
    return v0;
}
int main(void) { return test_func(); }
