#include <stdlib.h>
int test_func(void) {
    int v0 = 28;
    int v1 = 81;
    int v2 = 54;
    int v3 = 84;
    int v4 = 76;
    int v5 = 21;
    int i;
    v2 = v2 * 2;
    v2 = 18;
    if (v3 > v2) { v3 = v2; }
    v0 = v0 | v5;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
