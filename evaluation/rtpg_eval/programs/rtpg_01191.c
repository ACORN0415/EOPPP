#include <stdlib.h>
int test_func(void) {
    int v0 = 54;
    int v1 = 3;
    int v2 = 90;
    int v3 = 3;
    int v4 = 69;
    int v5 = 13;
    int v6 = 66;
    int v7 = 10;
    int i;
    if (v1 > v5) { v1 = v5; }
    v3 = 27;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v7;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
