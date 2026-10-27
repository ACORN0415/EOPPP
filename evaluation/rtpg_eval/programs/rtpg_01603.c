#include <stdlib.h>
int test_func(void) {
    int v0 = 61;
    int v1 = 52;
    int v2 = 54;
    int v3 = 6;
    int v4 = 72;
    int v5 = 27;
    int v6 = 42;
    int i;
    v0 = v0 + v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
