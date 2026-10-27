#include <stdlib.h>
int test_func(void) {
    int v0 = 68;
    int v1 = 13;
    int v2 = 50;
    int v3 = 96;
    int v4 = 85;
    int v5 = 8;
    int v6 = 71;
    int i;
    v0 = v0 - v4;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
