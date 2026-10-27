#include <stdlib.h>
int test_func(void) {
    int v0 = 48;
    int v1 = 45;
    int v2 = 78;
    int v3 = 19;
    int v4 = 90;
    int v5 = 11;
    int i;
    v0 = v0 + v3;
    v2 = v2 ^ v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
