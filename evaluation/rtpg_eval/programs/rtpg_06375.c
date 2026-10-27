#include <stdlib.h>
int test_func(void) {
    int v0 = 100;
    int v1 = 22;
    int v2 = 20;
    int v3 = 32;
    int v4 = 95;
    int i;
    v1 = 71;
    v4 = v4 - v0;
    if (v2 > v3) { v2 = v3; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    v2 = v2 | v3;
    return v0;
}
int main(void) { return test_func(); }
