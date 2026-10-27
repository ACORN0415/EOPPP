#include <stdlib.h>
int test_func(void) {
    int v0 = 7;
    int v1 = 6;
    int v2 = 32;
    int v3 = 75;
    int v4 = 45;
    int v5 = 0;
    int i;
    v0 = v0 * 3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
