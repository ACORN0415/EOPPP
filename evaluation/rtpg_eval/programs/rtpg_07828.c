#include <stdlib.h>
int test_func(void) {
    int v0 = 9;
    int v1 = 62;
    int v2 = 69;
    int v3 = 48;
    int v4 = 63;
    int v5 = 73;
    int v6 = 14;
    int v7 = 44;
    int i;
    v0 = 27;
    v5 = v5 - v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
