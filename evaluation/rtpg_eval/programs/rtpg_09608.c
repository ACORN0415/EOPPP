#include <stdlib.h>
int test_func(void) {
    int v0 = 91;
    int v1 = 77;
    int v2 = 90;
    int v3 = 73;
    int v4 = 61;
    int v5 = 67;
    int i;
    v0 = v0 + v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
