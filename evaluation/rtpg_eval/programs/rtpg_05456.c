#include <stdlib.h>
int test_func(void) {
    int v0 = 6;
    int v1 = 77;
    int v2 = 88;
    int v3 = 0;
    int v4 = 71;
    int v5 = 83;
    int i;
    v1 = v1 * 6;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
