#include <stdlib.h>
int test_func(void) {
    int v0 = 14;
    int v1 = 7;
    int v2 = 75;
    int v3 = 61;
    int i;
    v3 = v3 + v1;
    v3 = v3 * 2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
