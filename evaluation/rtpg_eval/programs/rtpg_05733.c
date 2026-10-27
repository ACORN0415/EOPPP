#include <stdlib.h>
int test_func(void) {
    int v0 = 4;
    int v1 = 88;
    int v2 = 67;
    int v3 = 45;
    int v4 = 55;
    int i;
    v2 = v2 - v0;
    if (v2 > v3) { v2 = v3; }
    v3 = v3 + v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
