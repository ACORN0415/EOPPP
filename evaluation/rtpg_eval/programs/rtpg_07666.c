#include <stdlib.h>
int test_func(void) {
    int v0 = 61;
    int v1 = 97;
    int v2 = 55;
    int v3 = 23;
    int v4 = 38;
    int i;
    v0 = v0 * 8;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
