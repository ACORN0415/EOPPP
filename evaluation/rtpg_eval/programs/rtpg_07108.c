#include <stdlib.h>
int test_func(void) {
    int v0 = 66;
    int v1 = 64;
    int v2 = 90;
    int v3 = 29;
    int v4 = 39;
    int v5 = 98;
    int i;
    v0 = v0 * 3;
    v4 = v4 + v5;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
