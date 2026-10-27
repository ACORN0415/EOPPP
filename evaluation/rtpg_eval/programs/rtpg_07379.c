#include <stdlib.h>
int test_func(void) {
    int v0 = 42;
    int v1 = 72;
    int v2 = 7;
    int v3 = 88;
    int v4 = 14;
    int v5 = 44;
    int v6 = 29;
    int v7 = 49;
    int i;
    v6 = v6 + v2;
    if (v6 > v5) { v6 = v5; }
    v3 = v3 * 6;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
