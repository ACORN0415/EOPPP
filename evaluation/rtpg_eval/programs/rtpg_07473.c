#include <stdlib.h>
int test_func(void) {
    int v0 = 71;
    int v1 = 11;
    int v2 = 2;
    int v3 = 23;
    int v4 = 96;
    int v5 = 28;
    int v6 = 16;
    int i;
    v4 = v4 + v6;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
