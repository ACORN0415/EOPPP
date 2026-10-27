#include <stdlib.h>
int test_func(void) {
    int v0 = 62;
    int v1 = 97;
    int v2 = 24;
    int v3 = 99;
    int v4 = 78;
    int v5 = 81;
    int v6 = 56;
    int i;
    if (v3 > v0) { v3 = v0; }
    v4 = 57;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
