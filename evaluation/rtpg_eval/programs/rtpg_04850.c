#include <stdlib.h>
int test_func(void) {
    int v0 = 61;
    int v1 = 83;
    int v2 = 63;
    int v3 = 100;
    int v4 = 70;
    int i;
    v3 = v3 * 2;
    v4 = v4 - v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
