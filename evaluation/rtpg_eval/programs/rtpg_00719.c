#include <stdlib.h>
int test_func(void) {
    int v0 = 24;
    int v1 = 43;
    int v2 = 61;
    int v3 = 69;
    int v4 = 46;
    int v5 = 17;
    int v6 = 83;
    int v7 = 89;
    int i;
    v7 = v7 * 5;
    if (v2 > v0) { v2 = v0; }
    v0 = v0 + v7;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
